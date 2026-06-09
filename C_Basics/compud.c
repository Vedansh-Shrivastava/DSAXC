#include <stdio.h>
#include <math.h>

int main() {
    float total_amount = 0.0;
    float principle = 0.0;
    float rate = 0.0;
    int time = 0;
    int n = 0;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("Enter the annual interest rate: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    total_amount = principle * pow((1 + (rate / n)), (n * time));
    printf("The total amount after %d years is: %.2lf\n", time, total_amount);
    return 0;
}