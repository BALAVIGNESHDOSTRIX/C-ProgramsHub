
    /*
        In memory allocation for negative integer in computer takes 
        2's complement state
    
    */


#include<stdio.h>

void main(){

    printf("%x \n", -1<<4);
}


/*
    Integer occupy the 2bytes of memory generally

    1) 0000 0000 0000 0001     ===> 16 bit binary conversion of 1

    2) 1111 1111 1111 1110     ====> 1's complement

    3) 1111 1111 1111 1110
                         1 (+)
       --------------------
       1111 1111 1111 1111     =====> 2's complemet of -1


    4) left shit (4) <<4

       1111 1111 1111 1111     ======> 2's complemet of -1
  1111 1111 1111 1111 0000     ======> <<4 shift left
  -------------------------
    f    f   f    f    0       ======> Hex code for the given problem

*/