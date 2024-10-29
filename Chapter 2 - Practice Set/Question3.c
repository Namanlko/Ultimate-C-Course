// Question 3: Write a program to check whether a number is divisible by 97 or not.

#include<stdio.h>

int main(){
    int n;
    printf("Enter Value of n?");
    scanf("%d",&n);

    printf("Divisibility Test Returns: %d\n",n%97);

    return 0;
}