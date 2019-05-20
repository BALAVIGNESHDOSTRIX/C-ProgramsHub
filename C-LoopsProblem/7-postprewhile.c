#include<stdio.h>

void main(){
    int x=3,y=3;

    while (--x,y--)
    {
        /* code */
        --x;
    }

    printf("%d, %d \n", x,y);
    
}

/*
    when using the 2 condition in while-loop the right most condition will
    take to perform evaluation.

    o/p : -4,-1
*/