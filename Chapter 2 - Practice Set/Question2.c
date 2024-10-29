// Question 2: What data type will 3.0/8 - 2 return?

#include<stdio.h>

int main(){
    
    int a = 3.0/8;
    float b = 3.0/8;

    printf("Value of a After Storing it in Integer Variable : %d\n",a);
    printf("Value of b After Storing it in Float Variable : %f\n",b);

    // Note: By default 3.0/8 - 2 will be of double data type. 

    return 0;
}