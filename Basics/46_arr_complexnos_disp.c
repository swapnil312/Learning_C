// Create an array of 5 complex numbers created with the help of structures and display them with the help of a display function. The values must be taken as an input from the user.
# include <stdio.h>
typedef struct complex{
    float r;
    float i;
}comp;
void display(comp a[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%f + %fi\n",a[i].r,a[i].i);
    }
}
int main()
{
    comp arr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter real part of element %d: ",(i+1));
        scanf("%f",&arr[i].r);
        printf("Enter real part of element %d: ",(i+1));
        scanf("%f",&arr[i].i);
    }
    display(arr);
    return 0;
}