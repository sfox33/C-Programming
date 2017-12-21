#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int myArray[100];       //Holds the initial array
    int secondArray[100];   //Holds the reversed form of myArray
    time_t t;
    srand((unsigned)time(&t));  //Seeds the random number generator
    int i;  //Loop control variable for the for-loops

    for(i = 0; i < 100; i++)    //Populates myArray with random integers in the interval [0,10]
    {
        myArray[i] = rand()%11;
    }

    printf("First Array\n");

    for(i = 0; i < 100; i++)        //Prints the integers in the array
    {
        if(i%10 == 0 && i != 0)
        {
            printf("\n");
        }
        printf("%d, ", myArray[i]);
    }

    printf("\n");

    for(i = 0; i < 100; i++)        //Stores the elements of myArray into secondArray in reverse order
    {
        secondArray[i] = myArray[100 - (i+1)];
    }

    printf("Second Array\n");

    for(i = 0; i < 100; i++)        //Prints secondArray
    {
        if(i%10 == 0 && i != 0)
        {
            printf("\n");
        }
        printf("%d, ", secondArray[i]);
    }
}
