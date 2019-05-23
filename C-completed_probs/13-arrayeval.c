#include<stdio.h>

void main(){
    int x[5] = {10,20,30,40,50};

    printf("%d \n",x[2]);
    printf("%d \n",2[x]);
    printf("%d \n", x[-1]);
}


/*
    [10,  20,   30,    40, 50]
      |    |     |      |   |
      1000 1002 1004 1006  1008

    x[2]

    pointer working stratergy
    x[2] => *(x + 2) => *(1000 + 2) = *(1004) = 30
    2[x] => *(2 + x) => *(2 + 1000) = *(1004) = 30
    x[-1] => *(x - 1) => *(1000 - 1) = *(999) = garbage value any
*/