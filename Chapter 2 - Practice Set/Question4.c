// Question 4: Explain step by step evaluation of 3 * x/y - z + k, where x=2, y=3, z=3, k=1.

#include<stdio.h>

int main(){
    
    int x = 2, y = 3, z = 3, k = 1;

    double ans = 3 * x/y - z + k;
    printf("Answer is %lf.",ans);

    return 0;
}