#include<stdio.h>

int main(){
    int a =11;

    for (int i = 0; i <= a; i++)
    {
        if(i == 5){
            continue;
        }
        printf("value is %d \n",i);
    }

    return 0;
    
}