#include <stdio.h>

/*here we i have demonstrated pointer.instead of writing x multiple times
we use pointer to refer to the same memory location. we can change value of x
by updating *ptr, avoiding redundant variable declarations. by default value of pointer is "Garbage"
 */


int main() {


int x=20;
int *ptr = &x; // *ptr= it is pointer that stores address of x. so we are telling compiler to store address of int x.
  int y;
  y= *p; // here y will store value of x with help of pointer "ptr"
  
printf("\n%d", *ptr);  //*ptr means access the value of x
printf("\n%d", ptr); // ptr means access the address of x
printf("\n%d", y); /// y=20

printf("\n%d", x); /// x=20
printf("\n%d", &x); ///address of x
*ptr= 40; ///  now we updated value of x=20 and gave new value x=40 with help of *ptr
printf("\n%d", *ptr);  ///*ptr=40

///printf("%d", &x);
//printf("%d", *ptr);
//printf("%d", ptr);
//printf("\n%d", x);
//printf("\n%d", &x);

}
