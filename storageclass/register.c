#include<stdio.h>
//Register storage class only used when fast accessing

unsigned int arr[10];
int main(){

    register int a,b,c;
    for(int i=0;i<10;i++){
        int z = 10;
        a = 20 * i + z;
        b = a * 2;
        c = b;

        arr[i] = c;
    }

    printf("Printing the array values.... \n");

    for (int i = 0; i < sizeof(arr)/ sizeof(unsigned int); i++)
    {
        /* code */
        printf("Index %d \t value is %u \t \n",i,arr[i]);
    }

    return 0;
    
}