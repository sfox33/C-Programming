#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;    //The number being examined to determine whether or not it's a perfect number
    int sum = 1;    //The sum of factors if a number
    int i;  //Number being examined.
    int j;  //Possible factor

    printf("The Perfect Numbers from 1 to 10000 are:\n");
    for(i = 2; i <= 10000; i++)  //Cycles through all numbers from 2 to 10,000
    {
        num = i;    //Assigns num to the value being examined
        for(j = 2; j <= i/2; j++) //Go through possible factors of i
        {
            if(num%j == 0)  //if j is a factor of num, then add j to the sum
                sum = sum + j;
        }
        if(sum == i)    //If a perfect number is found, print it
        {
            printf("%i, ", sum);
        }
        sum = 1;    //resets sum
    }
    printf("\nProgram End");    //Prints when all perfect numbers in the examined interval have been found.
}
