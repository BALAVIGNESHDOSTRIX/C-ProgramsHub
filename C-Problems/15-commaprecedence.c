#include<stdio.h>

void main(){
    int a;
    a = (1,2,3,4,5);
    printf("%d \n",a);
}

/*
    when using the comma seperated expression the compiler evaluate left to right then
    take the right most value then assign to the variable
*/