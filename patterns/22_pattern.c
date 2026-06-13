#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

int pattern22(int size);

int main()
{
    int size;
    scanf("%d", &size);
    pattern22(size);
    return 0;
}

int pattern22(int size) {
    for (int i = 0; i < 2 * size - 1; i++) {
        for (int j = 0; j < 2 * size - 1; j++) {

            int top = i;
            int left = j;
            int right = (2 * size - 2) -j;
            int bottom = (2 * size - 2) - i;

            int minDist = min(min(top, bottom), min(left, right));
            printf("%d ", size - minDist);
        }
        printf("\n");
    }
    return 0;
}