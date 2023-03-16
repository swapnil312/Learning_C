// Write a program to check whether ia given number is prime or not.

# include <stdio.h>
int main()
{
    int n,count = 0,i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(i <= n)
    {
        if(n % i == 0)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        printf("%d is a prime number.",n);
    }
    else if(count == 1)
    {
        printf("%d is neither prime nor composite.",n);
    }
    else
    {
        printf("%d is a composite number.",n);
    }
    return 0;
}