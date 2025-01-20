#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    const char plus = '+';
    const char multiply = '*';
    const char divide = '/';
    const char minus = '-';

    char inputString[30];

    printf("Welcome to simple culculator\n");

    fgets(inputString, sizeof(inputString), stdin);

    int num1 = inputString[0] - '0';
    int num2 = inputString[4] - '0';

    if (inputString[2] == plus)
    {
        int res = num1 + num2;
        printf("Result: %d\n", res);
    }
    else if (inputString[2] == multiply)
    {
        int res = num1 * num2;
        printf("Result: %d\n", res);
    }
    else if (inputString[2] == divide)
    {
        int res = num1 / num2;
        printf("Result: %d\n", res);
    }
    else if (inputString[2] == minus)
    {
        int res = num1 - num2;
        printf("Result: %d\n", res);
    }
    else
    {
        printf("Incorrect input format\n");
    }

    return 0;
}