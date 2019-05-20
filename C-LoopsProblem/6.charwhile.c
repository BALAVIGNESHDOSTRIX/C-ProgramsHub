#include<stdio.h>

void main(){

    char ch = 124;
    while (0<++ch)
    {
        /* code */
        printf("%d \n", ++ch);
    }
    
}

/*
    o/p :

    127
    -128
*/