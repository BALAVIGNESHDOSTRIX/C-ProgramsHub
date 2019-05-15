#include<stdio.h>

int main(){
    int a,b,c;
    a=b=20;
    c = a==b;
    printf("%d \n", c); //So the result of the statement is - 1
}

/*
        when multi-assign operator the flow goes right to left.

        so In a=b=20 first b get assigned then b value asigned to a


        a==b returns true in the form of integer equalent (1)

*/