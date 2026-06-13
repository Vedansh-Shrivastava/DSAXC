#include <stdio.h>

int pattern19(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern19(size);
    return 0;
}

int pattern19(int size) {
    int z = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++){
            printf("*");
        }

        for (int j = 0; j < z; j++){
            printf(" ");
        }

        for (int j = 0; j < size - i; j++){
            printf("*");
        }

        z += 2;
        printf("\n");
    }

    int y = 2 * size - 2;
    
    for(int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++){
            printf("*");
        }

        for (int j = 0; j < y; j++){
            printf(" ");
        }

        for (int j = 0; j < i; j++){
            printf("*");
        }

        y -= 2;
        printf("\n");
    }
    return 0;
}