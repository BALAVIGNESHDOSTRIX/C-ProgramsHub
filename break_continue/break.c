#include<stdio.h>

int main(){

    int a = 10;
    for(int i =0;i<=a;i++){
        if(i == 6){
            printf("Value is : %d \n",i);
            break;
        }
        printf("Value is : %d \n",i);
    }
    return 0;
}