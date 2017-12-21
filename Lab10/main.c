#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[40];      //Holds the input name
    char first[20];     //Holds the first name
    char last[20];      //Holds the last name
    int i, space;       //i is a loop control variable while space holds the position of the whitespace
    int counter = 0;    //Used to cycle through the first and last arrays while the input string is being split

    printf("Please enter a first and last name separated by a space.\n");
    scanf("%[^\n]%*c", name);

    for(i = 0; i < strlen(name); i++)       //Finds the whitespace and saves the position in the space variable
    {
        if(name[i] == ' ')
        {
            space = i;
            break;
        }
    }

    for(i = 0; i < strlen(name); i++)   //Examines the input string and puts each character in its respective array
    {
        if(i < space)       //Puts the char in the "first" array if its position is to the left of the space
        {
            first[counter] = name[i];
            counter++;
        }
        else if(i == space) //Ends the first array once the space is reached
        {
            first[counter] = '\0';
            counter = 0;
        }
        else        //Puts the char in the "last" array if its position is to the right of the space
        {
            last[counter] = name[i];
            counter++;
        }

    }
    last[counter] = '\0';

    printf("%s\n", first);      //Prints the first name
    printf("%s", last);     //Prints the last name

    return 0;
}
