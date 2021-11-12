#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int freq[256] = {0};
    
    printf("Enter the string: ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }
    
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("The frequency of %c is %d\n", i, freq[i]);
        }
    }
    return 0;
}