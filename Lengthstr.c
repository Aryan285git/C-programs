#include <stdio.h>
#define SIZE 50
#include <string.h>
void check(char a[])
{
	int l=0;
	for(int i=0;a[i]!='\0';i++)
	{
		l++;	
	}
	printf("Length of String is : %d",l);
}
int main()
{
	char str[SIZE];
	printf("Enter the String\n");
	gets(str);
	check(str);
	return 0;	
}