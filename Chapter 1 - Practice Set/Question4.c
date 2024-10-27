// Question 4: Write a program to calculate simple intrest for a set of values representing principal, no of years and rate of intrest.

#include<stdio.h>

int main(){
    
    float p,r,t;
    printf("Enter Principal Value?\n");
    scanf("%f",&p);

    printf("Enter Rate of Intrest?\n");
    scanf("%f",&r);

    printf("Enter No Of Yeas?\n");
    scanf("%f",&t);

    float si = (p*r*t)/(100.0);
    printf("Simple Intrest Value is %f.",si); 

    return 0;
}