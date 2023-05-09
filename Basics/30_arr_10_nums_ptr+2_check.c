// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

# include <stdio.h>
int main()
{
    int a[10];
    int i = 0;
    int *ptr = &a[0];
    printf("Enter elements of array...\n");
    for (; i < 10; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Value at ptr = %d.\n",*ptr);
    printf("Value at (ptr+2) = %d.\n",*(ptr+2));
    return 0;
}