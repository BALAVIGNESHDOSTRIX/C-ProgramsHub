#include<stdio.h>

struct Emp
{
    /* data */

    int rollno;
    float salary;
    char name[10];
};

void main(){
    typedef struct Emp emp;
    emp e;
    e.rollno = 121;
    e.salary = 2342.43;

    printf("%d \n",e.rollno);
}
