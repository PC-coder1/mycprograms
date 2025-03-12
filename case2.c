#include <stdio.h>

char light_char = 'r';

int main()
 {
    switch (light_char)
    {
    
    case 'r':
    printf("stop");
    break;
    
    case 'y':
    printf("go slow");
    break;

    case 'g':
    printf("go");
    break;
    default:
    printf("invalid");
}

 }