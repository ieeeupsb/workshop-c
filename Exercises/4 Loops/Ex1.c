#include <stdio.h>

int main()
{
    int num, sum = 0;
    scanf("Number? %d", &num);

    // I don't know how many iterations are needed, so I use a while loop
    while(num > 0)
    {
        sum += num%10; // this extracts the last digit from 'num' and adds to 'sum'

        num /= 10; // this does integer division, so the last digit from 'num' is removed.
    }

    printf("Sum of digits: %d", sum);
}
