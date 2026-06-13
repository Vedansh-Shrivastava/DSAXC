#include <stdio.h>

int pattern18(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern18(size);
    return 0;
}

int pattern18(int size) {
    for(int i = 0; i < size; i++) {
        char start = ('A' + size - 1) - i;
        for(int j = start; j <= start + i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}