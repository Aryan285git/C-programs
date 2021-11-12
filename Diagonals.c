#include <stdio.h>
int main(){

	printf("Enter the size of a square matrix\n");
	int d;
	scanf("%d",&d);
	int a[d][d];
	printf("Enter the elements of a square matrix\n");
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	int sum=0;
	printf("The sum of upper triangular elements of a square matrix are \n\n");
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			if(i<j)
		    sum=sum+a[i][j];
		}
		
	}
    printf("Sum : %d",sum);
    return 0;
}
