// Calculate income tax paid by an emplyee to the goverment as per the slabs mentioned below:
// Income Slab         Tax
// 2.5L - 5.0L           5%
// 5.0L - 10L           20%
// Above 10.0L          30%
// Note that there is no tax below 2.5L. Take income amount as an iput from the user.

#include<stdio.h>
int main(){

    float i,x,i_t;
    
    printf("_ _ _ CALCULATE INCOME TAX _ _ _\n");
    printf("\n");
    printf("Enter your annual income : ");
    scanf("%f", &i);
    
    if(i>=250000 && i<500000)
    {
        x = 5;
    }
    else if(i>=500000 && i<1000000)
    {
        x = 20;
    }
    else if(i>=1000000)
    {
        x = 30;
    }
    else
    {
        x = 0;
    }
    
    i_t = (x/100)*i;
    printf("Income tax to be paid : %f", i_t);
    

}