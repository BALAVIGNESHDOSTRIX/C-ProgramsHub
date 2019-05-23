#include<stdio.h>

void main(){
    int a[3] = {10,20,30};
    int b[3];

    b = a; //Compiletime array

    printf("%d , %d , %d \n", b[0],b[1],b[2]);
}

/*
    int a[3] = {10,20,30};
    int b[3];

    b = a;

    the above expression is invalid because the you cant assign directly the array to another array

    because the array variable address is constant 

    a = 2000 //base address of array a
    b = 4000 //base address of array b

    so b = a you cant assign the a-address directly to b
*/