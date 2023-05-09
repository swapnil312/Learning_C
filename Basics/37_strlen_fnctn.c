// Write your own version of strlen function from <string.h>
# include <stdio.h>
int strlen(char[]);
int strlen(char a[])
{
    int i = 0;
    int c = 0;
    while (a[i] != 0)
    {
        c++;
        i++;   
    }
    return c;
}

int main()
{
    char str[10];
    printf("Enter a string : ");
    gets(str);
    
    printf("Length = %d.",strlen(str));
    return 0;
}