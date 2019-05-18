#include<stdio.h>


void main(){
    int a =4 ,b =5;

    b = a++ + a--;
    a = ++b + b--;

    printf("values is : a: %d,b: %d \n",a,b);
}

/*
    when expression contains post & pre-increment opeartion.

    check if post-increment is available means then evaluate the expression
    first then increment the value.

    if the pre-increment is available means then evaluate the value incremented
    then expression will evaluated.
*/