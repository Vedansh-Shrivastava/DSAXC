#include <stdio.h>

int pattern9(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern9(size);
    return 0;
}

int pattern9(int size) {
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
    for(int a = 0; a < size; a++) {
        for(int b = 0; b < a; b++){
            printf(" ");
        }

        for(int c = 0; c < 2*size - (2*a + 1); c++){
            printf("*");
        }
        for(int d = 0; d < a; d++){
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}