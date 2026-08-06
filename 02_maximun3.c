#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    printf("Enter C : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("Maximum is A");
    }
    else if (b > a && b > c)
    {
        printf("Maximum is B");
    }
    else
    {
        printf("Maximum is C");
    }
    return 0;
}