#include <stdio.h>

int main()
{
    int a;

    printf("Enter Your Number : ");
    scanf("%d", &a);

    if (a<0)
        printf("Your Number is Negative");
    else if (a>0)
        printf("Your Number is Positive");
    else
        printf("Your Number is Zero");



    return 0;
}   