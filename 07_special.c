#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any value : ");
    scanf("%c", &ch);

    if (ch <= 'Z' && ch >= 'A' || ch <= 'z' && ch >= 'a')
    {
        printf("Value is An Alphabet");
    }
    else if (ch <= '9' && ch >= '0')
    {
        printf("Value is A Digit");
    }
    else
    {
        printf("The value is A Special Character");
    }
    
    return 0;
}