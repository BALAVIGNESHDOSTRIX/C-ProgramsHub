#include<stdio.h>

void fun(int);
void main(){

    fun(3);
}

void fun(int x){
    printf("%d \n",x);

    if(x){
        fun(x - 1);
    }

    printf("%d \n",x);
}