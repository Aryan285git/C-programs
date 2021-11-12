#include <stdio.h>
void addComplex()
{
	int Number1[2];int Number2[2];
        printf("Enter real part of number 1 : ");
        scanf("%d",&Number1[0]);
        printf("Enter imaginary part of number 1 : ");
        scanf("%d",&Number1[1]);
        printf("Enter real part of number 2 : ");
        scanf("%d",&Number2[0]);
        printf("Enter imaginary part of number 2 : ");
        scanf("%d",&Number2[1]);
        int sumr=Number1[0]+Number2[0];
        int sumi=Number1[1]+Number2[1];
        printf("%d + %di",sumr,sumi);
    
}
int main(){

	addComplex();
	return 0;

}