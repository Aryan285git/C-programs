#include <stdio.h>
int main(){

	printf("Enter the size of two square matrix\n");
	int d;
	scanf("%d",&d);
	int a[d][d];
	int b[d][d];
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int ans[d][d];
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			ans[i][j]=0;
		}
	}

	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			for(int k=0;k<d;k++)
			ans[i][j]+=a[i][k]*b[k][j];
		}
	}
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
