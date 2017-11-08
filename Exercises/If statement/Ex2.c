#include <stdio.h>

int main()
{
    float height, weigth, ibm;

    printf("Height ? ");
    scanf("%f", &height);

    printf("Weight ? ");
    scanf("%f", &weigth);

    // calculate body index mass
    ibm = weigth / (height*height);

    if(ibm < 16) printf("Severely underweight\n");
    else if(ibm < 18.5) printf("Underweight\n");
    else if(ibm < 25) printf("Normal\n");
    else if(ibm < 30) printf("Overweight\n");
    else if(ibm < 35) printf("Moderately obese\n");
    else printf("Severely obese\n");
}