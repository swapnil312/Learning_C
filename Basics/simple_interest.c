// Write a program to calculate simple interest for a set of values representing prinicipal, no of years and rate of interest.
#include<stdio.h>
int main()
{
    float p,r,t,s_int;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter rate of interest(in percentage) : ");
    scanf("%f",&r);
    printf("Enter time(in years) : ");
    scanf("%f",&t);
    s_int = (p*r*t)/100;
    printf("Simple interest for the amount is %f.",s_int);
    return 0;
}