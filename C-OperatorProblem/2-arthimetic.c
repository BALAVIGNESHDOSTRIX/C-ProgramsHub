#include<stdio.h>

void main(){

    int c = 4 % 5 == 4 % 2 + 3;

    printf("%d \n",c);
}

/*
    when using the relational & arthimetic operators first the compiler 
    evealuate the arthimetic operation then relational operations
*/