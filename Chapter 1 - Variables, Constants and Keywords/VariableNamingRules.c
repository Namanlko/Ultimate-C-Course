// Rules for naming variable in C:

// 1) First character must be an alphabet or underscore(_).
// 2) No commas and blanks are allowed.
// 3) No special symbol other than underscore (_) allowed.
// 4) Variable names are case sensitive.
// 5) We must create meaningful variable names in our programs. This enhances the readability of our program.

#include<stdio.h>

int main(){

    int age; // Here age variable is a meaningful name which indicates that this variable hold age value.
    age = 18;
    printf("Age is %d",age);

    // Some valid variable names are given below:
    int num;
    char gender;
    int _a;
    float decimal_no;

    return 0;
}