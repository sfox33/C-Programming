#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, area, circumference;
    const float pi = 3.14159265359;

    printf("Enter the radius of your circle:\n");
    scanf("%f", &radius);

    area = pi * (radius * radius);
    circumference = pi * (2 * radius);

    printf("The data for your circle is as follows:\nArea: %f   Circumference: %f", area, circumference);

    return 0;
}
