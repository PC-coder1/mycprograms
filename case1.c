/* switch statement is a control structure
 used to simplify decision making based on your 
 choice */

#include <stdio.h>

int choice = 1;
int main() {


switch (choice)
{
case 1:
printf("Dispensing chips");
    /* code */
    break;
case 2:
printf("dispensing soda");
break;

default:
printf("invalid choice");
    break;
}

}