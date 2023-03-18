// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the value of sum and average in main.

# include <stdio.h>

void fnctn_sum_avg(int *, int *, int *,float *);
void fnctn_sum_avg(int *x, int *y, int *sumtn, float *avrg)
{
    *sumtn = (*x)+(*y);
    *avrg = (*sumtn)/2.0;

}
int main()
{
    int a,b,sum;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    fnctn_sum_avg(&a,&b,&sum,&avg);
    printf("Sum = %d.\n",sum);
    printf("Average = %f.",avg);

    return 0;
}