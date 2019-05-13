/*
    malloc function is dynamic memory allocation method for structue

    prototype

    return_type malloc(size_t)

    malloc return the void* (Generic pointer) beacuase it will adopt all the
    pointers type

    malloc returns the base address of the structure memory location

    if malloc return the NULL pointer means the memory allocation is get failed.
    or else if it is success means it will returns the void* (generic pointer)

*/

#include<stdio.h>
#include<stdlib.h>

struct Employee
{
    /* data */

    int rollno;
    char empname[20];
    float salary;
};


void main(){

    struct Employee* ptr;

    ptr = (struct Employee*) malloc(sizeof(struct Employee));

    if(ptr != NULL){
        
        printf("Memory allocated successfully \n");

        printf("Enter the Employee datas \n");

        scanf("%d", &ptr->rollno);
        scanf("%s", ptr->empname);
        scanf("%f",&ptr->salary);
    }
    else
    {
        printf("Memory allocation is failed....");    
    }

   
    printf("Employee Name is: %s \n", ptr->empname);
    
}