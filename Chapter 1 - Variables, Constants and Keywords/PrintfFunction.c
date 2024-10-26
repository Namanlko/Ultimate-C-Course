// Printf Function: Printf function is used to print a value on console screen. We also have to mentioned the format specifier.

#include<stdio.h>

int main(){

    int a = 1;
    float b = 1.5;
    char c = 'Z';

    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);

    // Here %d, %f, %c are format specifiers.

    printf("This Message will Printed on Console Screen!");
    return 0;
}