#include <math.h>
#include <stdio.h>

float taiseki(float r, float h);
float hyoumenseki(float r, float h);

int main(void) {
    float r, h;
    float v, s;

    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("\nEnter the height: ");
    scanf("%f", &h);

    v = taiseki(r, h);
    s = hyoumenseki(r, h);
    printf("Volume: %f\nArea: %f\n", v, s);
    return 0;
}

float taiseki(float r, float h) {
    float volume;
    volume = M_PI * pow(r, 2) * h;
    return volume;
}

float hyoumenseki(float r, float h) {
    float area;
    area = 2 * M_PI * r * h + 2 * M_PI * pow(r, 2);
    return area;
}