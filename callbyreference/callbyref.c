#include<stdio.h>

int swap(int *,int *);

int main(){

    int a =100,b=200;
    printf("Before swap \t a value is: %d \t b value is: %d \n",a,b);
    swap(&a,&b);
    printf("After swap \t a value is: %d \t b value is: %d \n",a,b);
    return 0;
}

int swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}