// Question 1: Write a C program to calculate area of a rectangle.
// 1) Using Hard Coded Inputs.
// 2) Using Inputs Supplied by the User.

#include<stdio.h>

int main(){

    // 1) Using Hard Coded Inputs:
    int a = 10;
    int b = 8;
    int area = a * b;
    printf("Area of Rectangle is %d.\n",area);

    // 2) Using Inputs Supplied by the User:
    int l,w;
    printf("Enter Length?\n");
    scanf("%d",&l);
    printf("Enter Width?\n");
    scanf("%d",&w);
    int ar = l*w;
    printf("Area of Rectangle is %d.\n",ar);

    return 0;
}