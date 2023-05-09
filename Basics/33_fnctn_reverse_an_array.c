// Write a program containing a function which reverses the array passed to it.
# include <stdio.h>
void rev_arr(int[],int);
void rev_arr(int arr[],int l)
{
    for(int i = 0; i < l/2; i++)
    {
        int x = arr[i];
        arr[i] = arr[l-i-1];
        arr[l-i-1] = x;
    }
}
int main()
{
    int a[] = {1,43,76,5487,4534,87,567};
    rev_arr(a,(sizeof(a)/sizeof(a[0])));
    for(int i = 0; i < (sizeof(a)/4); i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
