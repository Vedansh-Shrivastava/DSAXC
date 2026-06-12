#include <stdio.h>

int pattern11(int size);

int main()
{
    int size;
    scanf("%d", &size);
    pattern11(size);
    return 0;
}

int pattern11(int size) {
    int start = 1;
    
    for (int i = 0; i < size; i++) {
        if( i % 2 == 0) start = 1;
        else start = 0;

        for(int j = 0; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start;
        }
        printf("\n");
    }
    
}