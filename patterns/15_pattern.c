#include <stdio.h>

int pattern15(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern15(size);
    return 0;
}

int pattern15(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 'A'; j <= 'A' + size - i - 1; j++) {
            
            printf("%c ", j );
        }
        printf("\n");
    }
    return 0;
}