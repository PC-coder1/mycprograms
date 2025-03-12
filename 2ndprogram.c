#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    float weight;

    printf(" \n name of student is ");
    scanf("%s", name);

    printf(" \n enter age");
    scanf("%d", &age );

    printf("enter weight");
    scanf("%f", &weight);

    /// to print
    printf("\n student detail");
    printf("\n name of student is %s \n", name);
    printf(" \n age of student is %d \n", age );
    printf("\n marks of student %.2f \n", weight);
    
    return 0;

}