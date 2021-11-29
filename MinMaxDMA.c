#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    printf("enter no. of rows and coloumns:-");
    scanf("%d%d",&r,&c);
    int *ptr;
    ptr=(int *)malloc((r*c)*sizeof(int));
    printf("Enter array elements:-\n");
    int min=10000;
    int max=0;
    for(int i=0;i<r*c;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<r*c;i++)
    {
        if(max<*(ptr+i))
            max=*(ptr+i);
        if(min>*(ptr+i))
            min=*(ptr+i);
    }
    printf("Maximum=%d\n",max);
    printf("Minimum=%d",min);
    return 0;
}