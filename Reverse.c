#include <stdio.h>
void reverse(int n)
{
    if (n == 0)
       return ;
   int t= n%10;
   printf("%d",t);
   reverse(n/10);
}

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    reverse(num);
    return 0;
}