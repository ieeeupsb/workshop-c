#include <stdio.h>

int main()
{
    unsigned long time, days, hours, minutes;

    // ask the time in seconds
    printf("How many seconds? ");
    scanf("%ul", &time);

    // calculate
    days = time / (24*3600);
    time %= (24*3600);

    hours = time / 3600;
    time %= 3600;

    minutes = time / 60;
    time %= 60;

    printf("%lu days, %lu hours, %lu minutes and %lu seconds", days, hours, minutes, time);

}