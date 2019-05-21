#include<stdio.h>

void main(){

    int i = 4;

    switch (i)
    {
    default:
        printf("Hello world \n");
        break;
    case 1:
        printf("Case study \n");
    case 4:
        printf("Execute first \n");
    }
}

/*
    when placing the default condition placed first inside the swich case 
    that will execute first then if break is not available means the all the case will next case will print

    the break is not manditory in the switch case

*/