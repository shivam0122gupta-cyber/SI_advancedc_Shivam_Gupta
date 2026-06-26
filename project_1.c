#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int playerChoice, computerChoice;
    srand(time(0));
    printf("=== Rock, Paper, Scissors Game ===\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &playerChoice);
    computerChoice = (rand() % 3) +1;
    printf("You chose: "); 
    
    switch(playerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
        default: printf("Invalid choice!\n");
         return 0;
    }

    printf("Computer chose: ");
    switch(computerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }

    if (playerChoice == computerChoice) {
        printf("Result: It's a draw!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("Result: You win!\n");
    } else {
        printf("Result: Computer wins!\n");
    }

    return 0;
}