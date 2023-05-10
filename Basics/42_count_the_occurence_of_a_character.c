// Write a program to count the occurence of a given character in a string.

# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    char c;
    int l;
    int count = 0;
    printf("Enter a string whithin 100 charcters : ");
    gets(str);
    printf("Enter the character whose occurence you want to find : ");
    scanf("%c",&c);
    l = strlen(str);
    for(int i = 0; i < l; i++)
    {
        if(c == str[i])
        count++;
    }
    printf("Occurence of '%c' in the string is %d.",c,count);
    return 0;
}