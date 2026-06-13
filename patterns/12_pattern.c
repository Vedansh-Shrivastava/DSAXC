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
    int spaces = 2 * (size - 1);

    for(int i = 1; i <=size; i++) {
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }

        for(int k = 0; k <= spaces - 2*i; k++){
            printf(" ");
        }

        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
