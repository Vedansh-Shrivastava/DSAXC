#include <stdio.h>

int pattern8(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern8(size);
    return 0;
}

int pattern8(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < i; j++){
            printf(" ");
        }

        for(int k = 0; k < 2*size - (2*i + 1); k++){
            printf("*");
        }
        for(int l = 0; l < i; l++){
            printf(" ");
        }

        printf("\n");
    }
}