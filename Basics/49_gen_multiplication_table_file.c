// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
# include <stdio.h>
int main()
{
    int n,i = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("Files/multiplication_table.txt","w");
    while(i <= 10)
    {
        fprintf(fptr,"%d x %d = %d\n",n,i,(n*i));
        i++;
    }
    fclose(fptr);
    return 0;
}