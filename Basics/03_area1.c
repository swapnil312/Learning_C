// Calculate the area of a circle and modify the same program to calculate the volume of cylinder given its radius and height

#include<stdio.h>

int main(){
    printf("Calculatig Area of a Circle _ _ _\n");
    float r,a;
    printf("Enter radius of the circle : ");
    scanf("%f",&r);
    a = 3.14*(r*r);
    printf("Area of circle is %f.",a);
    printf("\n");
    printf("Calculatig Volume of a Cylinder _ _ _\n");
    float r1,h,v;
    printf("Enter radius of the cylinder : ");
    scanf("%f",&r1);
    printf("Enter height of the cylinder : ");
    scanf("%f",&h);
    v = 3.14*(r*r)*h;
    printf("Volume of cylinder is %f.",v);

    return 0;
}