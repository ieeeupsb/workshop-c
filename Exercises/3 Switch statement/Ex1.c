#include <stdio.h>

int main()
{
    char op;

    printf("Operation ( + , - , * , / ) ? ");
    scanf("%c", &op);

    float num1, num2;    

    // Input
    printf("First Operand ? ");
    scanf("%f", &num1);
    printf("Second Operand ? ");
    scanf("%f", &num2);

    // Operation
    switch(op)
    {
        case '+':
            printf("Result: %f\n", num1+num2);
            break;

        case '*':
            printf("Result: %f\n", num1*num2);
            break;
        
        case '-':
            printf("Result: %f\n", num1-num2);
            break;

        case '/':
            printf("Result: %f\n", num1/num2);
            break;
        
        default:
            // if the operator doesn't match +,-,/,*
            printf("Invalid operator!\n");
    }
}