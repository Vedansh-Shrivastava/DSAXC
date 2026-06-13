#include <stdio.h>

int pattern16(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern16(size);
    return 0;
}

int pattern16(int size) {
    for(int i = 0; i < size; i++) {

        char ch = 'A' + i;

        for(int j = 0; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}