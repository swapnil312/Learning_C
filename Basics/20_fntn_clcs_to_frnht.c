// Write a function to convert celcius temperature to farenheit.

# include <stdio.h>
float tempconvert(float);
int main()
{
    float c;
    printf("Enter temperature in celcius : ");
    scanf("%f", &c);
    printf("Temperature in farenheit is %f.",tempconvert(c));
    return 0;
}
float tempconvert(float c)
{
    
    return ((9*c)/5)+32;
}