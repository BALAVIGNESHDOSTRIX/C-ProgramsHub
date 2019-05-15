        //Pre-Increment operator wiht Operand (compile time error example)

        /*
            When using the post or pre increment operators the condition 
            should be applicable only on varibale

            Example:
                a = 7
                ++(a) =====> correct
                ++(a*c+b) ====> not correct
        */


#include<stdio.h>

int main(){
    int a=20,b=40;

    printf("%d \n", ++(a*b+4)); //Lvaue error raising statement

    return 0;
}