#include <stdio.h>

int main()
{
    unsigned int radius;
    float PI = 3.1415926;

    // asks the radius
    printf("Radius? ");
    scanf("%u", &radius);

    /*
        AREA(r) = PI * r^2
        Perimeter(r) = 2*PI*r;
    */
    
    printf("Area = %f\n", PI*radius*radius);
    printf("Perimeter = %f\n", 2*PI*radius);

}