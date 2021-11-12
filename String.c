#include <stdio.h> 
#define MAX_SIZE 100 
int main()
{
int marks[MAX_SIZE];
int n, i,j,high,low,sum=0,avg; printf("Enter the number students: "); scanf("%d", &n);
 
for(i=0; i<n; i++)
{
printf("Enter the marks of students: "); scanf("%d", &marks[i]);
}
//PRINTING marks[] array for(i=0; i<n; i++)
{
printf("\nmarks[%d] : %d",i+1,marks[i]);
}


//highest marks, lowest marks and average. high=marks[0];
low=marks[0]; for(i=0; i<n; i++)
{
if (high<marks[i]) high=marks[i]; if (low>marks[i]) low=marks[i]; sum+=marks[i];
}
avg=sum/n;
printf("\nHighest marks= %d\n",high); printf("Lowest marks= %d\n",low); printf("Average= %d\n",avg);
//median
int temp=0;


for(i=0 ; i<n ; i++)
{
for(j=0 ; j<n-1 ; j++)
{
 
if(marks[j]>marks[j+1])
{
temp    = marks[j]; marks[j]        = marks[j+1]; marks[j+1] = temp;
}

}

}


printf("\nThe array after sorting is..\n"); for(i=0 ; i<n ; i++)
{
printf("\nmarks[%d] : %d",i+1,marks[i]);
}
float median=0;
// if number of elements are even if(n%2 == 0)
median = (marks[(n-1)/2] + marks[n/2])/2.0;
// if number of elements are odd else
median = marks[n/2];


printf("\nMedian= %5.2f\n",median);
//mode
int maxValue = 0, maxCount = 0; int count = 0;
for (i = 0; i < n; ++i) { count = 0;

for (j = 0; j < n; ++j) {
if (marks[j] == marks[i])
 
++count;

}


if (count > maxCount) { maxCount = count; maxValue = marks[i];
}

}


printf("Mode= %d\n",maxValue);
//array marks2[]
int marks2[MAX_SIZE]; printf("Array marks2[]:"); for (i = 0; i < n; ++i) {
marks2[i]=marks[i]; printf("%d ",marks2[i]);
}
//array marks3[]
int marks3[MAX_SIZE]; 
int k=0;
for (i=0; i<n; i++)
{
// Check if the picked element is already printed for (j=0; j<i; j++){
if (marks[i] == marks[j]) break;
}
// If not printed earlier, then print it if (i == j){
marks3[k]=marks[j]; k++;}
 
}
printf("\nUnique elements:"); for(i=0 ; i<k ; i++){
marks[i]=marks3[i]; printf("%d ",marks[i]);
}
return 0;

}
