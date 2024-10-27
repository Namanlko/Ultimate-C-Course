// Question 3: Write a program to convert Celcius (Centigrade degree) to Farenheit.

#include<stdio.h>

int main(){
    
    int c;
    printf("Enter Value in Celcius?\n");
    scanf("%d",&c);

    float f = c*(9.0/5.0) + 32.0;
    printf("Value in Farenheit is %f.",f);

    return 0;
}