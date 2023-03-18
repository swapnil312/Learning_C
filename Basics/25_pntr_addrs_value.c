// Write a program to print the address of a variable. Use this address to get the value of this variable.

# include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    int* adrs;
    adrs = &a;
    printf("Address of variable a is %u.\n",adrs);
    printf("Value at address %u is %d.", adrs, *adrs);
    return 0;
}
