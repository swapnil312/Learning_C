// Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference.

# include <stdio.h>

int increase10times(int*);
int increase10times(int *b)
{
    *b = (*b) * 10;
}

int main()
{
    int a = 10;
    printf("Initial value of a is %d.\n",a);
    increase10times(&a);
    printf("Final value of a is %d",a);

    return 0;
}