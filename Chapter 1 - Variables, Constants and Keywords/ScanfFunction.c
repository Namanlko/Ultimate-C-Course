// Scanf Function: Scanf Function is used to take input from the user and assign it to a variable. The address of operator (&) is used along with the variable name to store in it.

#include<stdio.h>

int main(){
    int n;
    printf("Enter Value of n?");
    scanf("%d",&n);
    printf("Value of n is %d.",n);
    return 0;
}