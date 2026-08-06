#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Maximum is: %d\n", a);
    }
    else
    {
        printf("Maximum is: %d\n", b);
    }

}