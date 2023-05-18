// Write a function sumvector which returns the sum of two vectors passed to it. The vectors must be two dimensional.
# include <stdio.h>
typedef struct vector{
    float x;
    float y;
}vect;
vect sumvector(vect v1, vect v2){
    vect v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    return v3;

}
int main()
{
    vect v1;
    vect v2;
    vect v3;
    printf("Enter x component of 1st vector : ");
    scanf("%f",&v1.x);
    printf("Enter y component of 1st vector : ");
    scanf("%f",&v1.y);
    printf("Enter x component of 2nd vector : ");
    scanf("%f",&v2.x);
    printf("Enter y component of 2nd vector : ");
    scanf("%f",&v2.y);
    v3 = sumvector(v1,v2);
    printf("Sum = %fi + %fj",v3.x,v3.y);
    return 0;
}