// Type Conversion: Type conversion in C is the process of converting one data type to another. The type conversion is only performed to those data types where conversion is possible.

#include<stdio.h>

int main(){

    int x = 10;
    char y = 'a';

    // y implicitly converted to int. ASCII value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z);

    return 0;
}