#include <stdio.h>
#include <stdlib.h>
/**
*Takes user input for the sides of two rectangles and returns which rectangle has the greater area.
**/
int main()
{
    float length1, length2, width1, width2, area1, area2;   //Holds the rectangles' data

    //Prompts the user for the length and width of the two rectangles
    printf("Enter the length of the first rectangle.\n");
    scanf("%f", &length1);
    printf("Enter the width of the first rectangle.\n");
    scanf("%f", &width1);
    printf("Enter the length of the second rectangle.\n");
    scanf("%f", &length2);
    printf("Enter the width of the second rectangle.\n");
    scanf("%f", &width2);

    //Calculates the area of the two rectangles
    area1 = length1 * width1;
    area2 = length2 * width2;

    if(area1 > area2)   //Activates if the first rectangle has a larger area
        printf("The first rectangle has a larger area.");
    else if(area1 < area2)  //Activates if the second rectangle has a larger area
        printf("The second rectangle has a larger area.");
    else    //Activates if both areas are equal
        printf("Both rectangles have an equal area");

    return 0;
}
