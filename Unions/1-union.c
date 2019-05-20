#include<stdio.h>

union Emp
{
    /* data */

    int rollno;
    char name[11];
    float salary;
};

void main(){

    union Emp emp;

    emp.rollno = 123;
    // emp.salary = 2032.4;
    // emp.name = "Bala";
    printf("%d \n", emp.rollno);
    // printf("%f \n",emp.salary);
}


/*
    when using user-defined datatype (union) initialize the any one element

    union share the same memory location for all the elements. so union is used
    old days.
*/