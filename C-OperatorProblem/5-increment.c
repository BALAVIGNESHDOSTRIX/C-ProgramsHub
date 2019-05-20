#include<stdio.h>

void main(){
    int a = 5;
    a = a+++a;
    printf("%d \n",a);
}

/*
    when above like increment is using in the program

    a = a+++a;
    compiler will take the expression like
    a = a++ + a;
    
*/