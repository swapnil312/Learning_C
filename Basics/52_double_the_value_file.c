// Write a progam to modify a file containing an integer to double its value.
# include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Files/integer_file.txt","r");
    int num;
    fscanf(fptr,"%d",&num);
    num*=2;
    fptr = fopen("Files/integer_file.txt","w");
    fprintf(fptr,"%d",num);
    return 0;
}