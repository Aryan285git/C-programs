#include <stdio.h>
 int cube(int n)
 {
 	return(n*n*n);
 }
 int main()
 {
 	int n;
 	printf("Enter n : \n");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{
 		printf("%d \n",cube(i));
 	}
 	
 }