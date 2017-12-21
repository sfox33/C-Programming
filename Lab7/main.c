#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int diceRoll(); //Returns a random value to represent a dice roll
void scorePrint(float); //Prints a message containing the player's earnings from playing

int main()
{
    srand(time(0));
    int score, goal;    //Score holds the result of each roll, goal is the result of the first roll of the round
    int round = 1;  //records whether or not it is the first roll of a game
    char affirmation;       //The loop control variable for the do-while loop.
    float winnings = 0.0;   //Total results of the player's winnings
    float pool = 0.0;       //The pot currently in play

    do
    {
        score = diceRoll() + diceRoll();        //Determines the roll of both die to calculate the player's score

        if(round == 1)      //Prompts the play for any changes to their bet if it is the first roll of the round
        {
            do  //Keeps prompting the user if the player's bet was less than 0
            {
                printf("Enter the amount you wish to bet.\n");
                scanf("%f", &pool);
            }
            while(pool < 0);
            goal = score;
        }

        if((score == 7 || score == 11) && round == 1)   //Activates if a 7 or 11 was scored on the first round
        {
            printf("Your score was a %i.  You win.\n", score);  //Displays the score and that the player won
            winnings = winnings + pool;     //Updates the player's winnings
            scorePrint(winnings);       //Displays the result of the players gambling addiction
            printf("Enter a 'y' to play again.\n"); //Prompts the player to decide if they want to play again
            scanf(" %c", &affirmation);
        }
        else if((score == 2 || score == 3 || score == 12) && round == 1)   //Activates if a 2, 3, or 12 was scored on the first round
        {
            printf("Your score was a %i.  You lose.\n", score);  //Displays the score and that the player lost
            winnings = winnings - pool;     //Updates the player's winnings
            scorePrint(winnings);       //Displays the result of the players gambling addiction
            printf("Enter a 'y' to play again.\n"); //Prompts the player to decide if they want to play again
            scanf(" %c", &affirmation);
        }
        else
        {
            if(round == 1)
            {
                printf("Your score was a %i.\nEnter anything to resume.\n", score); //Prompts the player to enter something to start the next round
                scanf(" %c", &affirmation);
                goal = score;   //Sets the goal for the player to roll
                affirmation = 'y';
                round++;
            }
            else
            {
                if(score == goal)
                {
                    printf("Your score was a %i.  You win.\n", score);  //Displays the score and that the player won
                    winnings = winnings + pool;     //Updates the player's winnings
                    scorePrint(winnings);       //Displays the result of the players gambling addiction
                    printf("Enter a 'y' to play again.\n"); //Prompts the player to decide if they want to play again
                    scanf(" %c", &affirmation);
                    round = 1;  //resets round
                }
                else if(score == 7)
                {
                    printf("Your score was a %i.  You lose.\n", score);  //Displays the score and that the player lost
                    winnings = winnings - pool;     //Updates the player's winnings
                    scorePrint(winnings);       //Displays the result of the players gambling addiction
                    printf("Enter a 'y' to play again.\n"); //Prompts the player to decide if they want to play again
                    scanf(" %c", &affirmation);
                    round = 1;  //resets round
                }
                else
                {
                    printf("Your score was a %i.\nEnter anything to resume.\n", score); //Prompts the user to enter something to start the next round
                    scanf(" %c", &affirmation);
                    affirmation = 'y';
                }
            }
        }
    }
    while(affirmation == 'y');

    return 0;
}
/**
*Returns a random number in the interval [1,6]
*/
int diceRoll()
{
    return rand() % 6 + 1;
}
/**
*Prints the current winnings of the player
*/
void scorePrint(float winnings)
{
    printf("Your current earnings are $%.2f\n", winnings);
    return;
}
