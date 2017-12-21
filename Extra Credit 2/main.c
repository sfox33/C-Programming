#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int myArray[100];       //Holds 100 random integers
    time_t t;
    srand((unsigned)time(&t));  //Seeds the random number generator
    int i;  //Loop control variable for the for-loops
    int swap;

    for(i = 0; i < 100; i++)    //Populates myArray with random integers in the interval [0,10]
    {
        myArray[i] = rand()%11;
    }

    printf("Original Array\n");

    for(i = 0; i < 100; i++)        //Prints the integers in the array
    {
        if(i%10 == 0 && i != 0)
        {
            printf("\n");
        }
        printf("%d, ", myArray[i]);
    }

    printf("\n");

    for(i = 0; i < 50; i++)        //Reverses myArray
    {
        swap = myArray[i];
        myArray[i] = myArray[100 - (i+1)];
        myArray[100 - (i+1)] = swap;
    }

    printf("Reversed Array\n");

    for(i = 0; i < 100; i++)        //Prints the reversed myArray
    {
        if(i%10 == 0 && i != 0)
        {
            printf("\n");
        }
        printf("%d, ", myArray[i]);
    }
}
