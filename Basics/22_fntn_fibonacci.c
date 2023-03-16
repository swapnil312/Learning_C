// Write a program using recursion to calculate nth element of fibonacci series.

# include <stdio.h>
int nth_fibo(int);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("nth element of fibonacci series is %d.",nth_fibo(n));

    return 0;
}
int nth_fibo(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return nth_fibo(n-2)+nth_fibo(n-1);
    }
}