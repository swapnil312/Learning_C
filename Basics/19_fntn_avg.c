// Write a program using functions to find average of three numbers.

# include <stdio.h>
 float avg(float,float,float);
 float avg(float a, float b, float c)
 {
    return ((a+b+c)/3);
 }

 int main()
 {
    float a,b,c;
    
    printf("Enter 1st number : ");
    scanf("%f", &a);
    printf("Enter second number : ");
    scanf("%f", &b);
    printf("Enter third number : ");
    scanf("%f", &c);
    
    printf("Average of %f, %f and %f is %f.",a,b,c,avg(a,b,c));
    return 0;
 }