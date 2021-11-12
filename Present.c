#include <stdio.h>
#define SIZE 50
#include <string.h>
void check(char a[],char ch)
{
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==ch){
			printf("\n%c is present in %s",ch,a);
		    return;
		}
	}
	printf("\n%c is not present in %s",ch,a);
}
int main()
{
	char str[SIZE];
	char ch;
	printf("Enter the String\n");
	gets(str);
	printf("Enter the Character\n");
	scanf("%c",&ch);
	check(str,ch);
	return 0;	
}