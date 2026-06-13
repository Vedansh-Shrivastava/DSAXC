#include <stdio.h>

int pattern14(int size);

int main()
{
    int size;
    scanf("%d", &size);
    pattern14(size);
    return 0;
}

int pattern14(int size) {
    for(int i = 0; i <= size; i++) {
        for(int j = 'A'; j < 'A' + i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}