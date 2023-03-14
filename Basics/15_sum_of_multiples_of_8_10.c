// Write a program to calculate the sum of the numbers occuring in the multiplication table of 8(1 to 10).

#include<stdio.h>

int main()
{
    int  sum,i;
    sum = 0;
    
    for(i = 1; i <= 10; i++)
    {
        sum = sum + (8*i);
    }
    printf("Sum of the numbers occuring in the multiplicatioln table of 8 is %d.", sum);
}
