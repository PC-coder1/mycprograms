#include <stdio.h>

char operator = '+';
int a= 3, b=7;

int main()
{
    switch (operator)
    {
    case '+':
        printf("sum %d", a + b);
        break;
    case  '-':
        printf("difference %d", a-b);
        break;

    default:
        break;
    }
}
