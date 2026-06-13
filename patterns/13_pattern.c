#include <stdio.h>

int pattern12(int size);

int main()
{
    int size;
    scanf("%d", &size);
    pattern12(size);
    return 0;
}

int pattern12(int size) {
    int num = 1;

    for(int i = 0; i <= size; i++) {
        for(int j = 0; j < i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}