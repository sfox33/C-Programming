#include <stdio.h>
#include <stdlib.h>

/**
*Takes the weight of a package and prints the total cost to ship the package via Jim Bob's Pretty Good Freight Company
**/
int main()
{
    float weight, rate, price;  //Holds the weight of the package, the shipping rate, and the total price respectively

    printf("Enter the weight (in kilos) of the item you are shipping.\n");  //Prompts the user for the weight of the package
    scanf("%f", &weight);

    if(weight <= 1) //Sets the shipping rate if the package weighs up to 1 kilogram
        rate = 2.26;
    else if(weight > 1 && weight <= 4) //Sets the shipping rate if the package weighs between 1 kilogram and 4 kilograms
        rate = 3.46;
    else if(weight > 4 && weight <= 8) //Sets the shipping rate if the package weighs between 4 kilograms and 8 kilograms
        rate = 4.74;
    else //Sets the shipping rate if the package weighs over 8 kilograms
        rate = 5.56;

    printf("Your shipping cost is $%.2f", rate * weight);      //Prints the shipping cost for the package

    return 0;
}
