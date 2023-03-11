// Write a C program to calculate area of a rectangle by taking input from user

#include<stdio.h>

int main()
{
    float length = 0.0f;
    float breadth = 0.0f;
    float area;
    printf("Enter length : ");
    scanf("%f",&length);
    
    printf("Enter breadth : ");
    scanf("%f",&breadth);
    area = length*breadth;
    printf("The area of rectangle is : %f.",area);

    return 0;
}