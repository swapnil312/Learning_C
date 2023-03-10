// Write a program to convert celcius to fahreinheit
#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter temperature in centigrade scale : ");
    scanf("%f",&c);
    f = ((9*c)/5)+32;
    printf("Temperstue in fahreinheit scale is %f",f);
    return 0;
}