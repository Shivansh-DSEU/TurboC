#include <stdio.h>

int main()
{
    char ch;

    printf("Enter value : ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("The value is an Alphabet");
    else
        printf("The value is not an Alphabet");

    return 0;
}