#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArray[15];
    int i, counter, value;

    for(i = 0; i < 15; i++)    //Populates myArray with 0's to serve as a default value
    {
        myArray[i] = 0;
    }

    do      //Repeatedly asks the user for a value for the array until a -1 is entered for the index
    {
        printf("Enter in the number you wish to put in the array.\n");
        scanf("%i", &value);
        printf("Enter the slot value you wish to %i into.\nAccepted values are in the range [0,14].\nEnter -1 to quit.\n", value);
        scanf("%i", &counter);
        if(counter < -1 || counter > 14)        //Tells the user to enter a proper value and index
        {
            printf("Invalid number; please enter proper numbers.\n");
        }
        else if(counter != -1)  //Stores the number if the user has not tried to quit the program
        {
            printf("Number accepted.\n");
            myArray[counter] = value;
        }
    }while(counter != -1);

    printf("Original Array\n");

    for(i = 0; i < 15; i++)        //Prints the integers in the array
    {
        if(i%10 == 0 && i != 0)
        {
            printf("\n");
        }
        printf("%d, ", myArray[i]);
    }

}
