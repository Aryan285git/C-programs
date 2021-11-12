#include <stdio.h>
int fact(int n)
{
	if(n==0||n==1)
		return 1;
	else
	return n*fact(n-1);

}
int main()
{
	int a;
	printf("Enter a Number\n");
	scanf("%d",&a);
	int ans=fact(a);
	printf("The Factorial is %d",ans);
	return 0;
}