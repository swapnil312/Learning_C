// Write a program to create an array of 10 integrs and store multiplication table of 5.
# include <stdio.h>

int main()
{
    int a[10];
    int x;
    
    printf("Enter a number which multiplication table you want to print : ");
    scanf("%d",&x);
    for(int i = 1; i <= 10; i++)
    {
        a[i-1] = x*i;
    }
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",x,i,a[i-1]);
    }
    return 0;
}