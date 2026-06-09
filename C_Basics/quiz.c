#include <stdio.h>

int main() {

    char question[][100] = {
        "What is the capital of France?",
        "What is the largest planet in our solar system?",
        "Who wrote 'To Kill a Mockingbird'?"
    };

    char options[][100] = {
        "A. Berlin\nB. Madrid\nC. Paris\nD. Rome",
        "A. Earth\nB. Jupiter\nC. Mars\nD. Saturn",
        "A. Harper Lee\nB. J.K. Rowling\nC. Ernest Hemingway\nD. F. Scott Fitzgerald"
    };
    int score = 0;
    int i;
    char answers[] = {'C', 'B', 'A'};

    char userAnswer[3];

    printf("Welcome to the Quiz!\n");

    for(i = 0; i < sizeof(question) / sizeof(question[0]); i++) {
        printf("%s\n", question[i]);
        printf("%s\n", options[i]);
        printf("Enter your answer (A, B, C, D): ");
        scanf(" %c", &userAnswer[i]);

        if(userAnswer[i] == answers[i]) {
        score += 1;
        }
        else {
            printf("Wrong answer! The correct answer is %c\n", answers[i]);
        }

    }
    
    printf("Your final score is: %d out of %d\n", score, sizeof(question) / sizeof(question[0]));


}