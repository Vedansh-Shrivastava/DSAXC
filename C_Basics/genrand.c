#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int min = 1;
    int max = 100;

    int randomNum = (rand() % (max - min + 1)) +min;
    int guess = 0;
    printf("*** NUMBER GUESSING GAME ***\n");
 
    do {
        

        printf("Guess a number between %d and %d: ", min, max);
        scanf("%d", &guess);
        if(guess < randomNum) {
            printf("Too Low!\n");

        }
        else if(guess > randomNum) {
            printf("Too High!\n");
        }
        else {
            printf("Congratulations! You guessed the number!\n");
            break;
        }
        
    } while(guess != randomNum);
}