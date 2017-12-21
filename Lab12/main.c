#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int selection;      //Holds the option of the word the user wishes to find synonyms for
    FILE *fPointer;     //The file being examined
    char *strPointer;   //Points to the first letter of a synonym in the line array
    char line[200];     //Holds a line from the open .txt file
    int index;  //Holds the ending position of the synonym
    int count;  //counter for the for loop
    char word[20];  //Holds the extracted synonym
    char search[] = "<a href=\"http://www.thesaurus.com/browse/";   //The string being searched for in the .txt files to find synonyms

    printf("Enter the number of one of the following to get a synonym:\n");     //Prompts the user to select a word
    printf("1) atom\n2) depot\n3) family\n4) home\n5) letter\n6) school\n7) store\n");
    printf("8) style\n9) treasure\n10) value\n");
    scanf("%i", &selection);

    switch(selection)   //Open the proper file depending on the option selected by the user
    {
        case 1:
            fPointer = fopen("atom.txt", "r");
            break;
        case 2:
            fPointer = fopen("depot.txt", "r");
            break;
        case 3:
            fPointer = fopen("family.txt", "r");
            break;
        case 4:
            fPointer = fopen("home.txt", "r");
            break;
        case 5:
            fPointer = fopen("letter.txt", "r");
            break;
        case 6:
            fPointer = fopen("school.txt", "r");
            break;
        case 7:
            fPointer = fopen("store.txt", "r");
            break;
        case 8:
            fPointer = fopen("style.txt", "r");
            break;
        case 9:
            fPointer = fopen("treasure.txt", "r");
            break;
        case 10:
            fPointer = fopen("value.txt", "r");
            break;
        default:
            break;
    }

    printf("Synonyms:\n");

    while (!feof(fPointer))     //Search through each line in the .txt file for a synonym
    {
        fgets(line, 200, fPointer);
        if(strncmp(line,search,41) == 0)    //The pattern for finding a synonym has been found
        {
            strPointer = line;
            strPointer += 41;   //Jumps to the memory location of the first letter of the synonym
            for(count = 0; count <= strlen(strPointer); count++)    //Finds the index of the last letter of the synonym
            {
                if(line[count + 41] == '"') //Assigns the index value once the end of the word is reached
                {
                    index = count;
                    break;
                }
            }
            strncpy(word, strPointer, index);   //Extracts the synonym and saves it to word
            word[index] = '\0';     //Inserts the null character after the synonym
            printf("%s\n", word);   //Prints the synonym
        }
    }

     fclose(fPointer);  //Closes the .txt file
}
