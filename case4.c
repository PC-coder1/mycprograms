#include <stdio.h>

/// 1) declare the variable store the value in it manually

//char light_char = 'Y';
//char light_char = 'R';
char light_char = 'z';


int main()
{
    switch (light_char) /// declare the variable inside switch statement
    {
        case 'R':
        printf("stop");
        break;

        case 'Y':
        printf("go slow");
        break;
 
    default:
     printf("enter correct value");
        break;
    }
}
