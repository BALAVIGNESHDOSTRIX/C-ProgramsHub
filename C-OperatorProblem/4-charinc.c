#include<stdio.h>

void main(){

    int x = 1, y;
    char sport[] = "cricket";

    y = x++ + ++x;
    printf("%c \n", sport[++y]);

}