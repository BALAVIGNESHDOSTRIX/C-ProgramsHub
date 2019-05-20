#include<stdio.h>
#include<stdlib.h>

void main(){

    int capaciry = 5,*stack;

    stack = (int *)calloc(capaciry,sizeof(int));
    capaciry++;
    stack = (int *)realloc(stack,capaciry*sizeof(int));
}

/*
    calloc is using to perform the dynamic memory allocation for array

    when using calloc() only we can create the defined size array if we will
    perform dynamic memory operation we should use the realloc()
*/