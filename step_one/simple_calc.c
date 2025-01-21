#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void start_program();
void parse_input_string(char *inputString, int size);
void parse_expression(char *inputString, float *num1, float *num2, char *sign);

int main()
{
    printf("Welcome to C simple calculator!\n");
    printf("Example: 10 + 10\n");
    start_program();
    return 0;
}

void start_program()
{
    char inputString[30], sign = ' ';
    float num1 = 0, num2 = 0, res;

    parse_input_string(inputString, sizeof(inputString));
    parse_expression(inputString, &num1, &num2, &sign);

    switch (sign)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    default:
        printf("Incorrect input values");
        exit(0);
    }

    printf("Result:  %.2f %c %.2f = %.2f\n", num1, sign, num2, res);
    start_program();
}

void parse_input_string(char *inputString, int size)
{

    fgets(inputString, size, stdin);
}

void parse_expression(char *inputString, float *num1, float *num2, char *sign)
{
    sscanf(inputString, "%f %c %f", num1, sign, num2);
}