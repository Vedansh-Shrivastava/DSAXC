#include <stdio.h>

int pattern10(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern10(size);
    return 0;
}

int pattern10(int size) {
    for(int i = 0; i <= 2*size - 1; i++) {

        int stars = i;
        if(i > size) {
            stars = 2*size - i;
        }
        for(int j = 0; j < stars; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
}