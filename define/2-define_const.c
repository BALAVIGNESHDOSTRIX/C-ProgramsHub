#include<stdio.h>

#define length 20
#define widths 10
#define newline '\n'

int main(){
    int area;

    const int z = 100;

    area = length * widths;
    printf("Area of %d",area);
    printf("%c", newline);
    printf("%d",z);
    printf("%c", newline);
}