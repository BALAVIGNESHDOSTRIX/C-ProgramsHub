#include<stdio.h>

int main(){
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("The Value of a is %d \n",a);
    printf("The Address of a is %p \n", &a);
    printf("The Value of ptr is %p \n", ptr);
    printf("The Address of ptr is %p \n", &ptr);
    printf("The Value hold of ptr is %d \n", *ptr);

    return 0;
}