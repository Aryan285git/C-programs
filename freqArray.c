#include <stdio.h>
int main()
{
	printf("Enter n : ");
	int n;
	scanf("%d",&n);
	printf("\nEnter the numbers to find the frequency : ");
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=9;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(i==a[j])
				c++;
		}
		if(c!=0)
		printf("\nThe frequency of %d is : %d",i ,c);
		
	}
	return 0;

}