#include<stdio.h>

int (*ptr) (int,int);
int add(int,int);

int main(){
    int z;
    z = add(200,400);
    printf("The sum of x and y is: %d \n",z);

    ptr = &add;
    z = ptr(200,400);
    printf("The sum of x and y is: %d \n",z);
}

int add(int x,int y){
    return x+y;
}