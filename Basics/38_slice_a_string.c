// Write a function slice() to slice a string. It should change the original string such that it now the sliced string. Take m and n as the starting and ending position for slice.
# include <stdio.h>
# include <string.h>
void slice(char[], int, int);
void slice(char str[], int m, int n)
{
    char x[n-m+1];
    int a = m;
    for(int i = 0; i < n-m+1; i++)
    {
        x[i] = str[a];
        a++;
    }
    for(int i = 0; i < strlen(str); i++)
    {
        if(i < n-m+1)
        str[i] = x[i];
        else
        str[i] = '\0';
    }
}
int main()
{
    char string[50];
    
    int m,n;
    printf("Enter a string : ");
    gets(string);
    printf("Enter starting index for slicing : ");
    scanf("%d",&m);
    printf("Enter ending index for slicing : ");
    scanf("%d",&n);
    slice(string,m,n);
    printf("String after slicing is %s.",string);
    return 0;
}