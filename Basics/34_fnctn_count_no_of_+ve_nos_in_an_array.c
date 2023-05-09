// Write a program containing function which counts the number of positive numbers in an array.
# include <stdio.h>
int fnctn(int[],int);
int fnctn(int arr[], int l)
{
    int c = 0;
    for(int i = 0; i < l; i++)
    {
        if(arr[i] > 0)
        {
            c++;
        }
    }
    return c;
}
void main()
{
    int l;
    printf("Enter length of array : ");
    scanf("%d",&l);
    int a[l];
    printf("_ _ _ Enter the elements of array _ _ _\n");
    for(int i = 0; i < l; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("No of positive numbers in the array is %d.",fnctn(a,l));
}