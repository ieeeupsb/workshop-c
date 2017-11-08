#include <stdio.h>

int main()
{
    int num;

    printf("Insert a number ? ");
    scanf("%d", &num);

    printf("Factors : ");
    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            num /= i;

            i--; // attempt to use the same factor. At the end of the loop 'i' is incremented, so this is a way to keep the value on next iteration
        } 
    }
}