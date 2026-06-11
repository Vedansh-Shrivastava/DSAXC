#include <stdio.h>

int pattern4(int size);

int main() {
    int size;
    scanf("%d", &size);

    pattern4(size);
    return 0;
}

int pattern4(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j <= i; j++){
            printf("%d ", i + 1);
        }
        printf("\n");

    }
    return 0;
}