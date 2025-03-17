#include <stdio.h>
#include <string.h>
// to access the structure with pointer we use '->'.  eg.p2.a=
//define structures
struct studentz{
int  rollno;
char name[50];
float marks;
};

//declare structure variables
struct studentz s1;

// asigning values to structure members
 int main (){
    struct studentz s1, s2;
    s1.rollno = 101;
    s1.marks = 95.5;
    strcpy(s1.name, "PRITHVIRAJ Chavan"); ///strcpy as we cannot use string directly into c

    s2.rollno = 102;
    s2.marks = 87;
    strcpy(s2.name, "Hrithik Roshan");


    printf("rollno :%d\n", s1.rollno);
    printf("name : %s\n", s1.name);
    printf("marks : %.2f\n", s1.marks);

    printf("rollno :%d\n", s2.rollno);
    printf("name : %s\n", s2.name);
    printf("marks : %.2f\n", s2.marks);


    return 0;
 }
