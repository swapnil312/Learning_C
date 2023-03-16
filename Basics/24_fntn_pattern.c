// Write a program using function to print the following pattern.

# include <stdio.h>

void pattern(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
void pattern(int n)
{
    int j=1;
    int i = 1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}