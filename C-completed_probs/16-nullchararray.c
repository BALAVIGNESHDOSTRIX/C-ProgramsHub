#include<stdio.h>

void main(){
    char sf[] = "bala\0vignesh";
    printf("%s \n", sf);
}

/*
    when using the \0 is a null character. so if present in the character array
    the before null caracter only take to print by the compiler.

    so the above code answer is the bala
*/