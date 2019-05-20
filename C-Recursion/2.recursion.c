#include<stdio.h>

void fun(int,int);

void main(){
    int x = 10;
    fun(x,x++);
    printf("%d \n",x);
}

void fun(int x,int y){
    if(x>40){
        return;
    }
    x+=y;
    fun(x,y);
    printf("%d \n",x);
}

/*
    output:

    41
    31
    21
    11
*/