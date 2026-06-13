#include <stdio.h>

int pattern20(int size);

int main() {
    int size;
    scanf("%d", &size);
    pattern20(size);
    return 0;
}

int pattern20(int size) {

    int y = 2 * size - 2;
    
    for(int i = 1; i <= 2*size - 1; i++) {

        int stars = i;

        if (i > size) stars = 2 * size - i;
        
        for (int j = 0; j < stars; j++){
            printf("*");
        }

        for (int j = 0; j < y; j++){
            printf(" ");
        }

        for (int j = 0; j < stars; j++){
            printf("*");
        }

      
        printf("\n");

        if (i < size) y -= 2;
        else y += 2;
        
    }

  
    return 0;
}