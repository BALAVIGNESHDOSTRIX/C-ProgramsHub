#include<stdio.h>

void fun(int,int);

void main(){
    int i=6;
    fun(--i,i++);
    fun(++i,i--);
    printf("%d \n",i++);
}

void fun(int x,int y){
printf("%d , %d \n",x++,y--);   
}

/*
    when executing the function with parameters the compiler will evaluate
    right to left parameters
*/