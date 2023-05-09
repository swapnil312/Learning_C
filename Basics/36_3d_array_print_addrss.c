// Create a three dimensional array and print the address of its elements in increasing order.

# include <stdio.h>
int main()
{
    int a[3][4][5];
    int *ptr = &a[0][0][0];
    for(int i = 1; i <= (3*4*5); i++)
    {
        printf("%u\n",ptr++);
        
    }
    return 0;
}