#include <stdio.h>

int pattern6(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern6(size);
    return 0;
}

int pattern6(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(j <= size - i - 1) {
                printf("%d ", j + 1);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}