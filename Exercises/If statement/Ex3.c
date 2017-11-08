#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter the second degree polynomial coeficients (a*x^2 + b*x + c).\n\n");

    printf("a ? ");
    scanf("%f", &a);

    printf("b ? ");
    scanf("%f", &b);

    printf("c ? ");
    scanf("%f", &c);

    // calculate the discriminant b^2 - 4*a*c
    float discriminant = b*b - 4*a*c;

    if(discriminant == 0)
    {
        printf("x = %f", -b/(2*a));
    }
    else if (discriminant > 0)
    {
        discriminant = sqrt(discriminant);
        printf("x = %f  v  x = %f", (-b+discriminant)/(2*a), (-b-discriminant)/(2*a));
    }
    else
    {
        printf("No real roots!");
    }

}