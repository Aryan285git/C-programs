/*C program to change the value of constant integer using pointers.*/
#include <stdio.h>
int main()
{   
    const int a=10;     
    int *p;             
    p=&a;               
    printf("Before changing - value of a: %d",a);
    *p=20; 
    printf("\nAfter  changing - value of a: %d",a); 
    printf("\nValue has changed.");
    return 0;
}
