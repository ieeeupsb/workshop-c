#include <stdio.h>

#define LENGTH 5

void fillArray(int a[], int size); // fills the array with user input
void addArray(int a[], int b[], int size); // adds two arrays, the result is stored on first array -> a = a+b
void printArray(int a[], int size); // displays an array

int main()
{

    int a1[LENGTH], a2[LENGTH];

    // fill first array
    printf("First array\n");
    fillArray(a1, LENGTH);

    // fill the second array
    printf("\nSecond array\n");
    fillArray(a2, LENGTH);

    // add the arrays
    addArray(a1, a2, LENGTH);

    // displays the resultant array (sum of the two arrays)
    printf("\nSum : ");
    printArray(a1, LENGTH);
}

void addArray(int a[], int b[], int size)
{
    for(unsigned int i = 0; i < size; i++)
    {
        a[i] = a[i] + b[i];
    }
}

void fillArray(int a[], int size)
{
    for(unsigned int i = 0; i < size; i++)
    {
        printf("Element %d ? ", i);
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int size)
{
    printf("{");
    for(unsigned int i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("}");
}