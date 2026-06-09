#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.0;
    float b = 0.0;
    float result = 0.0;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%f", &b);

    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b != 0) {
                result = a / b;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;

            }
            break;
        default:
            printf("Invalid operator selected.\n");
            
}
    printf("Result: %.2f\n", result);
    return 0;

}