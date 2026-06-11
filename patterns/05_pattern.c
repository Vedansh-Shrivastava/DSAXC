#include <stdio.h>

int pattern5(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern5(size);
    return 0;
}

int pattern5(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(j <= size - i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}