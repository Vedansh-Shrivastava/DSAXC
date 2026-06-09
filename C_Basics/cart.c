#include <stdio.h>
#include <string.h>


int main() {
    char item[20];
    float price;
    int quantity;

    printf("Enter item name: ");
    scanf("%s", &item);

    printf("enter price: ");
    scanf("%f", &price);

    printf("enter quantity: ");
    scanf("%d", &quantity);

    float total = price * quantity ;

    printf("total:\n %d x %s --> $%.2f", quantity, item, total);

    return 0;


}