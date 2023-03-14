// Write a program to print multiplication table of a given number n in reverse order.

# include <stdio.h>
int main()
{
    int n,j,x;
    
    
    printf("Enter a number : ");
    scanf("%d", &n);
    for(j = 10; j >= 1; j--)
    {
        x = j*n;   
        printf("%d * %d = %d \n",n,j,x);
    }
    return 0;
}