#include <stdio.h>
#include <math.h>

int main() {

    float kg = 0.0;
    float lb = 0.0;
    int op = 0;

    printf("Weight convertion calculater\n
        1. Kilogram to pounds\n
        2. Pounds to kilogram\n
        Enter your choice: ");
    scanf("%d", &op);

    if(op == 1) {
        printf("enter your weight in Kgs; ")
        scanf("%f", &kg);
        lb = kg * 2.20462;
        printf("Your weight in pounds is: %.2flbs\n", lb);

    }
    else if(op == 2) {
        printf("Enter your weight in pounds: ");
        scanf("%f", &lb);
        kg = lb / 2.20462;
        printf("Your weight in kilogram is: %.2fKg\n", kg);
    }
    else {
        printf("Invalid option selected.\n");
    }

}