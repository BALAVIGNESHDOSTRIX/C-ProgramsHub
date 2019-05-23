#include<stdio.h>

void main(){
    int* p;
    float* q;
    char* c;

    printf("%ld \n", sizeof(p));
    printf("%ld \n", sizeof(q));
    printf("%ld \n", sizeof(c));
    printf("%ld \n", sizeof(char*));

}


/*
    In c program all type of pointer size is constant. if

    16-bit compiler = 2bytes
    32-bit compiler = 4bytes
    64-bit compiler = 8bytes
*/