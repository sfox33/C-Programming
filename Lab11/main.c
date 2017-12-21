#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toString();
struct Employee     //An Employee structure that holds the id, name, pay rate, and hours worked of an employee
{
    char id[20];
    char lastName[20];
    char firstName[20];
    int hourlyPayRate;
    int numHours;
};

int main()
{
    int i;      //Loop control variable
    int arraySize = 6;  //Size of the array of Employees

    Employee staff[arraySize];      //An array to hold a number of Employee structures

    Employee currEmployee;  //Placeholder for the current employee values being collected below

    for(i = 0; i < arraySize; i++)      //Prompts the user to fill in all of the values for each employee
    {
        printf("Enter the first name of employee %i\n", i+1);
        scanf("%[^\n]%*c", &(currEmployee.firstName));
        printf("Enter the last name of employee %i\n", i+1);
        scanf("%[^\n]%*c", &(currEmployee.lastName));
        printf("Enter the ID of employee %i\n", i+1);
        scanf("%[^\n]%*c", &(currEmployee.id));
        printf("Enter the hourly pay rate of employee %i\n", i+1);
        scanf("%d", &(currEmployee.hourlyPayRate));
        printf("Enter the number of hours that employee %i has worked\n", i+1);
        scanf("%d", &(currEmployee.numHours));
        getchar();
        staff[i] = currEmployee;
    }

    toString(staff, arraySize);
}

/****************************************************
 *Prints the values of an array of Employee structs
 ***************************************************/
void toString(struct Employee *inArray, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("Employee %d\n\tName: %s %s\n\tID: %s\n\tPay per hour: %d\tHours worked: %d\n", i, &inArray[i].firstName, &inArray[i].lastName, &inArray[i].id, inArray[i].hourlyPayRate, inArray[i].numHours);
    }
}
