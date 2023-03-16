// Write a function to calculate force of attraction on a body of mass m exerted by earth.
# include <stdio.h>
const float g = 9.8;
float force_of_attraction(float);

int main()
{
    float m;
    printf("Enter mass of the body : ");
    scanf("%f", &m);
    printf("Force of attraction on the body of mass %f is %f.",m,force_of_attraction(m));
    return 0;
}

float force_of_attraction(float m)
{
    return m*g;
}