#include<stdio.h>

void main(){
    int arr[5] = {10,20,30,40,50};

    int *ptr;
    ptr = arr;

    printf("%u \n", *++ptr+3);
    printf("%u \n", *(ptr-- + 2)+5);
    printf("%u \n", *(ptr+3)-10);

}

/*
    when *increment expression the increment(modification) will execute first


    integer pointer address incresses the datatype size

    like
     [10  , 20,  30,   40,  50]
      |     |    |     |    |
     1000  1002 1004  1006 1008

     1.
        *++ptr+3
        *1002+3 => 23

    2.
        *(ptr-- + 2)+5
        *(1002 + 2)+5 => 40+5 =45

    3.
        *(ptr+3)-10
        *(1000+3)-10
        *1006 - 10 => 50 -10 =40

*/    