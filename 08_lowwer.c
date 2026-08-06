#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any alphabet : ");
    scanf("%c", &ch);

    if (ch <= 'Z' && ch >= 'A')
    {
        printf("The alphabet is in Uppercase");
    }
    else if (ch <= 'z' && ch >= 'a')
    {
        printf("The alphabet is in Lowercase");
    }
    else
    {
        printf("The value is not an alphabet");
    }
    
    return 0;
}