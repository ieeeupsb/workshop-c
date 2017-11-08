#include <stdio.h>

int main()
{
    int n_students, total = 0;

    printf("Number of students ? ");
    scanf("%d", &n_students);

    for(int i = 0; i < n_students; i++)
    {
        int grade;
        printf("Grade ? ");
        scanf("%d", &grade);
        total += grade;
    }

    printf("Average grade is %f", (float) total/n_students); // total and n_students are integers!!!

}