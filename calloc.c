#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1) creating one integer
    int num_guests=5;

    //2) creating a pointer.then 
    //int*= by default calloc is void so thats why we type cast into char, int etc 

    int *table =(int*)calloc(num_guests ,sizeof(int)); /// 

    //// 3) check before memory allocation successful or not

    if(table== NULL)
    {
        printf("oops, no memory left\n");
        return 1;
    }
///// assigning values
    table[0] = 10;
    table[1] = 20;
    table[2] = 30;
    table[3] = 40;
    table[4] = 50;

    printf("values at table one: %d\n", table[0]);
    printf("values at table two: %d\n", table[1]);
    printf("values at table three: %d\n", table[2]);
    printf("values at table four: %d\n", table[3]);
    printf("values at table five: %d\n", table[4]);

    /// 5) freeing memory

    free(table);
}