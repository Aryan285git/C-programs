#include <stdio.h>
int main(){

	for(int i=1;i<=5;i++)
	{
		int c=1;
		for(int j=5;j>=i;j--)
		{
			printf("%d",c);
			c++;
        }
        printf("\n");
	    for(int k=1;k<=i;k++)
		{
			printf(" ");
	    }
    }
    return 0;
}