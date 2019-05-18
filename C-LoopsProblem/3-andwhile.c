#include<stdio.h>


void main(){

    int x = 2,y =3;

    while(--x && --y){
        printf("x,y value is : %d , %d \n",x,y);
    }
}


/*
    when && relational operator using in the loop condition. first it will
    check left side is true or not. if true means then check the second 
    condition. if both are true means then it will execute the program.
*/