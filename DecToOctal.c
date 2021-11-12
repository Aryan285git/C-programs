#include <stdio.h>
void octal(int number)
{
	int octalNumber[10];int i=0;
	for( i = 0; number> 0; i++)
    {
        octalNumber[i] = number % 8;
        number = number / 8;
    }
    
    printf("\n Equivalent Octal Number of a Given Number =  ");
    for(int j = i - 1; j >= 0; j--)  
    {
        printf("%d", octalNumber[j]);
    }
}
int main(){

	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	octal(n);
	return 0;

}