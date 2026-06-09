#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    double circumference = 0.0;
    double volume = 0.0;
    const double pi = 3.14159;

    printf("Enter the radius : ");
    scanf("%lf", &radius);
    area = pi * pow(radius, 2);
    circumference = 2 * pi * radius;
    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);
    printf("Volume: %.2lf\n", volume);

    return 0;
}