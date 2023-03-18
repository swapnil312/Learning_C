// Write a program to change the value of a variable i by using "pointer to pointer" type of variable.

# include <stdio.h>

int main()
{
    
    int i,*a,**b;
    printf("Enter value of i : ");
    scanf("%d",&i);
    a = &i;
    b = &a;
    **b = **b + 285;
    printf("Value of i is %d.\n",*a);
    printf("Value of i is %d.",**b);
    return 0;
}