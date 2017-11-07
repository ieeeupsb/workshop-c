#include <stdio.h>

int main()
{
    float temp_F, temp_C;

    // ask the temperature in Celsius
    printf("Temperature (Celsius) ? ");
    scanf("%f", &temp_C);

    // convert and display
    temp_F = temp_C*1.8 + 32;
    printf("Temperatura in Fahrenheit is %f\n", temp_F);

}