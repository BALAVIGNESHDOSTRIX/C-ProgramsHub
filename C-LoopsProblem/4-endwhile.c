#include<stdio.h>

void main(){

    int i = 1;

    while(i++<=12);

    {
        printf("%d \n",i);
    }
}

/*
    Above example while(); this means

    while(i++<=12){

    }
    {
        printf("%d \n",i);
    }

         ^
    like |  so the printf only once print.

    output: 14
*/