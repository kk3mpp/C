#include <stdio.h>
#define pi 3.1415926535

int main(void) {
    double r;
    int selection;

    printf("The following values can be calculated: \n");
    printf("1. Length of the circumference\n");
    printf("2. Area of the circle\n");
    printf("3. Volume of the sphere\n");
    printf("4. Surface area of the sphere\n");
    printf("Select the number: \n");
    scanf("%d", &selection);
    printf("Input the radius: \n");
    scanf("%lf", &r);

    switch (selection) {
        case 1:
            printf("Circumference Length: %lf\n", 2.0 * pi * r);
            break;
        case 2:
            printf("Circle Area: %lf\n", pi * r * r);
            break;
        case 3:
            printf("Sphere Volume: %lf\n", 4.0 / 3.0 * pi * r * r * r);
            break;
        case 4:
            printf("Sphere Surface: %lf\n", 4.0 * pi * r * r);
            break;
        default:
            printf("Invalid selection!");
            break;
    }
}