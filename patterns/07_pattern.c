#include <stdio.h>

int pattern7(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern7(size);
    return 0;
}

int pattern7(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i -1; j++){
            printf(" ");
        }

        for(int k = 0; k < (2*i) + 1; k++){
            printf("*");
        }
        for(int l = 0; l < size - i -1; l++){
            printf(" ");
        }

        printf("\n");
    }
}