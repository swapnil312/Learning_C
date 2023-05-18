// Write a program to read 3 integers from a file.
# include <stdio.h>

int main()
{
    FILE *fptr;
    int num1=0,num2=0,num3=0;
    fptr = fopen("Files/num.txt","r");
    fscanf(fptr,"%d",&num1);
    fscanf(fptr,"%d",&num2);
    fscanf(fptr,"%d",&num3);
    fclose(fptr);
    printf("1st number = %d\n",num1);
    printf("2nd number = %d\n",num2);
    printf("3rd number = %d\n",num3);
    return 0;
}