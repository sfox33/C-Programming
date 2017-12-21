#include <stdio.h>
#include <stdlib.h>

/**
*This program continually sums the user's number input until they enter a zero.
**/
int main()
{
    int number; //Holds the user's input
    int sum = 0;    //Sum of all of the user's inputs

    //This loop continually runs until the user enters a 0 when prompted
    do
    {
        printf("Enter in the number you wish to add.\n Or type in a zero to exit the loop.\n"); //Prompts the user to enter a number
        scanf("%i", &number);

        sum += number;  //Adds the user's most recent input to the sum variable

    }
    while(number != 0);

    printf("The sum of all of your numbers is: %i", sum);   //Prints the sum variable

    return 0;
}
