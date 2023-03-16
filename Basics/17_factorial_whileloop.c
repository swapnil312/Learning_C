// Write a program to calculate factorial of a given number using a while loop.
# include <stdio.h>

int main()
{
    int n,f = 1;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    int x = n;
    while(n >= 1)
    {
        f = f*n;
        n--;
    }
    printf("Factorial of %d is %d.",x,f);
    return 0;
}