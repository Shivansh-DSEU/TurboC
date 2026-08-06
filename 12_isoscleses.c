#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("Invalid angles. Angles must be greater than 0.\n");
    } else if (angle1 + angle2 + angle3 != 180) {
        printf("The angles do not form a valid triangle.\n");
    } else if (angle1 == angle2 && angle2 == angle3) {
        printf("Equilateral triangle.\n");
    } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
        printf("Isosceles triangle.\n");
    } else {
        printf("Scalene triangle.\n");
    }

    return 0;
}
