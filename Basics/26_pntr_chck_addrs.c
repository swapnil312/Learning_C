// Write a program having a variable . Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?

# include <stdio.h>

void fntcn(int i);
void fnctn(int i)
{
    printf("Address of i after passing it to a function is %u.", &i);
}
int main()
{
    int i = 56;
    printf("Address of i before passing it to a function is %u.\n", &i);
    fnctn(i);

    return 0;
}
// Address are not same because a copy of the value is given to the function in the call by value method of calling a function,
