#include<stdio.h>

void main(){
    int x = 6;

    for (--x; --x; x++)
    {
        /* code */

        printf("%d \n",x);
    }
    
}


/*
    for - loop first initialize the value only once then

    it will check the condition then true means the inside will execute. then
    modify or increment or (decrement) will perform.
*/