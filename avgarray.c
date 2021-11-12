#include <stdio.h>
int main()
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	printf("\nEnter the numbers for average :");
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	float avg=(float)sum/n;
	printf("\nAverage :%0.2f",avg);
	return 0;

}