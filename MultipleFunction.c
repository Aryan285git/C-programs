#include <stdio.h>
void multiple(int a,int b)
{
	if(a%b==0)
		printf("\n%d is the multiple of %d",a,b);
	else
		printf("\n%d is the not a multiple of %d",a,b);

}
int main()
{
	int a,b;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&a,&b);
	multiple(a,b);
	return 0;
}