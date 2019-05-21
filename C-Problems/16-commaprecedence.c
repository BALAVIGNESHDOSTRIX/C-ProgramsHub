#include<stdio.h>

void main(){
    int a,i=2;

    a = (i=i+1,i=i+2,i=i+3);
    printf("%d \n",a);

}

/*
    when using the comma seperated expression the compiler evaluate left to right then
    take the right most value then assign to the variable
*/