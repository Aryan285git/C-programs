#include <stdio.h>
#define SIZE 50
void maxm(int a[],int size)
{
	int max=0;
	for(int i=0;i<size;i++)
	{
		if(max<a[i])
			max=a[i];
		}
		printf("\n%d is the maximum in the array",max);
}
int main()
{
	int size;
	int a[SIZE];
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter Numbers\n");
	for(int i=0 ;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	maxm(a,size);
	return 0;
}