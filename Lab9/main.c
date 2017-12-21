#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int mine[] = {2,7,9,50,42,17,0,40,30};  //Declares my array of integers
    int arraySize = 9;  //Size of the above array
    bool sorted = false;    //Determines whether or not the array is sorted
    int count;  //The LCV for the below for loop

    while(!sorted)  //Keeps repeating the below program as long as the array is not sorted
    {
        sorted = true;  //Claims that the array is sorted
        for(count = 1; count < arraySize; count++)
        {
            if(mine[count] < mine[count - 1])      //If the currently examined element is less than the previous element...
            {
                sorted = false;     //The array was not completely sorted
                int swap = mine[count];     //Swap the two elements
                mine[count] = mine[count - 1];
                mine[count - 1] = swap;
            }
        }
    }
    //The below for loop prints the elements of the array
    for(count = 0; count < arraySize; count++)
    {
        printf("%i, ", mine[count]);
    }

    return 0;
}
