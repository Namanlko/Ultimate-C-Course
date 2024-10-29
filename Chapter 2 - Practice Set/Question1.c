// Question 1: Which of the following in invalid in C?
// 1) int a; b=a;
// 2) int v = 3^3;
// 3) char dt = '21 Dec 2020';

#include<stdio.h>

int main(){

    int a; 
    int b=a; // b is not declared here. We have declared b as an integer.
    printf("Value of a is %d.\n",a);
    printf("Value of b is %d.\n",b);
    
    int v = 3^3; // It will not show error because ^ is bitwise operator.
    printf("%d\n",v);
    
    char dt[] = "21 Dec 2020"; // It will show error because it is not a character. We have to change it to character array.
    printf(dt);

    return 0;
}