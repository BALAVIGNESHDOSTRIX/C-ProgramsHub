#include<stdio.h>

struct Student
{
    int rollno;
    char name[20];
    int mobile;
};


void main(){
    struct Student st = {111, "Bala", 802940920};

    printf("Student name %s \n", st.name);
    printf( "Student Roll no: %d \n",st.rollno);
}
