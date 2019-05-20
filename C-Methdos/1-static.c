#include<stdio.h>

void fun(void);

void main(){
    fun();
    fun();
    fun();
}

void fun(void){
    static int x = 5;

    printf("%d \n",x+=2);
}

/*
    static variable only destroyed when the complete program will destroying

    but auto & register variables destroy when the function will terminated.
*/