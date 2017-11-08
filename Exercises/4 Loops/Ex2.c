#include <stdio.h>

int main()
{
    int num;

    printf("Insert a number ? ");
    scanf("%d", &num);

    printf("Factors : ");

    int i = 2;
    while(i <= num)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
        else
        {
            i++;
        } 
    }
}