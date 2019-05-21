#include<stdio.h>

void main(){
    int i =1, j=2;

    while(i+1 ? --i : --j)
    {
        printf("%d \n",i);
    }

}

/*
    tenary while conditon

    while(i+1 ? --i : --j)

    while(1+1 ? --i : --j)

    while(2 ? --i : --j)

    while(2 ? 1 : --j)

    while(1)  //true
*/