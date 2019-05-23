#include<stdio.h>


void main(){
    int x = 1;

    switch (x)
    {
        x = x+1;
        case 1:
            printf("hello world \n");
            break;
        case 2:
            printf("cool \n");
            break;
        default:
            printf("cleared....");
            break;
    }
}

/*
    when placing the expression inside the switch case it doent work.
    
    The switch condition diectly process the case conditions only

    In above program the x=x+1 not evaluated.
    
*/