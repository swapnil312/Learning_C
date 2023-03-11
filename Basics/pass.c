// Write a program to find out whether a student is pass or fail, if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user.

#include<stdio.h>

int main()
{
    float a,b,c,sum;
    int count = 0;
    printf("_ _ _ Program to check if a student has passed or failed _ _ _\n");
    printf("Enter marks for English : ");
    scanf("%f",&a);
    printf("Enter marks for Mathematics : ");
    scanf("%f",&b);
    printf("Enter marks for Science : ");
    scanf("%f",&c);
    sum = a+b+c;

    if(a >= 33)
    {
        count++;
    }
    if(b >= 33)
    {
        count++;
    }
    if(c >= 33)
    {
        count++;
    }
    if((sum/3) >= 40)
    {
        count++;
    }
    
    if(count == 4)
    {
        printf("The student has passed the exam.");
    }
    else{
        printf("The student has failed the exam.");
    }
    return 0;
}