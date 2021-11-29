#include <stdio.h> 
int main()
{
    printf("Enter 2 numbers to be swapped\n");
    int v;
    scanf("%d",&v);
    int n;
    scanf("%d",&n);
    int *ptr=&v;
    int *ptr1=&n;
    int temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;
    printf("Numbers after being swapped\n");
    printf("%d\n", *ptr);
    printf("%d\n", *ptr1);
    return 0;
}