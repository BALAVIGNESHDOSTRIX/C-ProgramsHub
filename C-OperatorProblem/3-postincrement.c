#include<stdio.h>

void fun(int);

void main(){
    int x = 2;
    fun(x++);
}

void fun(int x)
{
    printf("%d \n", x++);
}


/*
    postincrement operator only works after evaluation 
    of expression.
*/