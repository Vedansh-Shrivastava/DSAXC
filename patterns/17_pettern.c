#include <stdio.h>

int pattern17(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern17(size);
    return 0;
}

int pattern17(int size) {
    for(int i = 0; i < size; i++) {

        char ch = 'A';
        int bp = i + 1;

        for(int j = 0; j < size - i - 1; j++) {
            printf(" ");
        }

        for(int k = 1; k <= 2*i + 1; k++) {

            printf("%c", ch);
            if(k < bp) ch++;
            else ch--;
        }

        printf("\n");

    }
    return 0;
}