// Take name and salary of two employees as input from the user and write them to a text file in the following format.
// name1, 5676.65
// name2, 563.6
# include <stdio.h>
# include <string.h>
int main()
{
    char name[30];
    float salary = 0;
    FILE *fptr;
    fptr = fopen("Files/name_salary.txt","w");
    printf("Enter name of 1st employee : ");
    gets(name);
    printf("Enter salary of 1st employee : ");
    fflush(stdin);
    scanf("%f",&salary);
    fputs(name,fptr);
    fprintf(fptr,", %f\n",salary);
    printf("Enter name of 2nd employee : ");
    fflush(stdin);
    gets(name);
    printf("Enter salary of 2nd employee : ");
    fflush(stdin);
    scanf("%f",&salary);
    fputs(name,fptr);
    fprintf(fptr,", %f\n",salary);
    fclose(fptr);
    return 0;
}