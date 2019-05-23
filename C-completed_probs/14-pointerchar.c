#include<stdio.h>

void main(){
    char* s = "bala";
    printf("%s \n", s);
    *s = 'c';
    printf("%s \n",s);
}


/*
    [b,     a,  l,   a]
     |      |   |    |
     1000  1001 1002 1003

     *s ===> 1000 (*s holds the base address of the character string)

     *s = 'c'; ===> 1000 = 'c';
        |
        |
        \/
    
    [c,a,l,a]

*/