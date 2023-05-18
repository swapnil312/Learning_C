// Write a program to read a text file chracter by charcater and write its content twice in a separate file.
# include <stdio.h>
int main()
{
    FILE *fptr_rd,*fptr_wrt;
    fptr_rd = fopen("Files/read_content.txt","r");
    fptr_wrt = fopen("Files/write_content.txt","w");
    char c;
    
    c = fgetc(fptr_rd);
    while(c != EOF)
    {
        fputc(c,fptr_wrt);
        c = fgetc(fptr_rd);
    }
    fptr_rd = fopen("Files/read_content.txt","r");
    fptr_wrt = fopen("Files/write_content.txt","a");
    c = fgetc(fptr_rd);
    while(c != EOF)
    {
        fputc(c,fptr_wrt);
        c = fgetc(fptr_rd);
    }
    // printf("%c",c);
}