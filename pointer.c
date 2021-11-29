#include <stdio.h>
 
int main()
{
    int Var = 20;
    int *ptr = &Var;
    printf("Value of Var = %d\n", *ptr);
    printf("Address of Var = %p\n", ptr);
    printf("*ptr is %d\n", *ptr);
    return 0;
}