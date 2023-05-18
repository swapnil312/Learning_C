// Create a two dimensional vector using structures in C.
# include <stdio.h>
typedef struct vector{
    float x;
    float y;
}vect;
int main()
{
    vect v1;
    printf("Enter x component of the vector : ");
    scanf("%f",&v1.x);
    printf("Enter y component of the vector : ");
    scanf("%f",&v1.y);
    printf("The vector is %fi + %fj.",v1.x,v1.y);

    return 0;
}