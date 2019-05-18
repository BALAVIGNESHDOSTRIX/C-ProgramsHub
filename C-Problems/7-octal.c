#include<stdio.h>


int main(){
    int a,c;
    a = 10;

    c = a + 010 + 0x20;

    printf("%d \n",c);

}



/*
    Expression : 10 + 010 + 0x20


    10 ===> Decimal Integer

    010 ====> octal value so we need to convert to Decimal value

    (010)8 ===> (?)10


    010 ===> 1 x 8^1 +0 x 8^0  ==> 8 + 8 = 16


    0x20 ====> Hexadecimal Integer

    (0x20)16  ===> (?)10

    0x20 ===>  2 x 16^1 + 0 x 16^0 ===> 16 + 16 = 32

    10 + 010 + 0x20 = 10 + 16 + 32 = 58
*/