// Write a program to calculate factorial of a given number using a for loop.

# include <stdio.h>

int main()
{
    int n,f,i;
    f = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("Fatorial of %d is %d.",n,f);
}