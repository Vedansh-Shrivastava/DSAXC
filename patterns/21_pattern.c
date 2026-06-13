#include <stdio.h>

int pattern21(int size);

int main()
{
    int size;
    scanf("%d", &size);
    pattern21(size);
    return 0;
}

int pattern21(int size) {
    for(int i = 0; i < size; i++) {
        if(i == 0 || i == size - 1) {
            for(int j = 0; j < size; j++) {
                printf("* ");
            }
        } else {
            printf("* ");
            for(int j = 0; j < size - 2; j++) {
                printf("  ");
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}