// Question 2: Calculate the area of a circle and modify the same program to calclulate the volume of a cylinder given its radius and height. 

#include<stdio.h>

int main(){
    
    int r;
    printf("Enter Value of Radius?\n");
    scanf("%d",&r);

    float area = 3.14f*r*r;
    printf("Area of Circle is %f.\n",area);

    int h;
    printf("Enter Value of Height?\n");
    scanf("%d",&h);
    float volume = 3.14 *r *r *h;
    printf("Volume of Cylinder is %f.\n",volume);
    
    return 0;
}