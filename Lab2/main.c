#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    float firstFloat = 5.5;
    int firstInteger = 9;
    int result = firstFloat + firstInteger;

    printf("The values are as follows:\nfirstFloat = %.1f\nfirstInteger = %i\nresult = %i", firstFloat, firstInteger, result);

    return 0;
}
