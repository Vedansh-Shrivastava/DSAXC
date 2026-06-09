#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetComputersChoice();
int GetPlayersChoice();
void CheckWinner(int computerChoice, int playerChoice);

int main() {
    int computerChoice = GetComputersChoice();
    int playerChoice = GetPlayersChoice();
    CheckWinner(computerChoice, playerChoice);
    return 0;
}

int GetComputersChoice() {
    int min = 1;
    int max = 3;

    int randomNum = (rand() % (max - min + 1)) +min;

    return randomNum;
}

int GetPlayersChoice() {
    int choice = 0;
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    return choice;
}

void CheckWinner(int computerChoice, int playerChoice) {
    if(computerChoice == playerChoice) {
        printf("It's a tie!\n");
    }
    else if((computerChoice == 1 && playerChoice == 3) ||
            (computerChoice == 2 && playerChoice == 1) ||
            (computerChoice == 3 && playerChoice == 2)) {
        printf("YOU LOSE!\n");
    }
    else {
        printf("You win!\n");
    }
}