#include <stdio.h>

int main()
{
	int arr[100];
	printf("Enter the size of the array\n");
	int size;
	scanf("%d",&size);
	printf("Enter the Number to insert\n");
	int n;
	scanf("%d",&n);
	printf("Enter the position to insert\n");
	int pos;
	scanf("%d",&pos);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=pos-1;i<size-1;i++)
	{
		arr[i]=arr[i+1];
    }
    arr[size-1=/0;
    for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;


}