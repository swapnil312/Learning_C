// Write a program to check whether a charcacter is present in a string.
# include <string.h>
# include <stdio.h>
int main()
{
    char str[100];
    char c;
    int x = 0;
    printf("Enter a string within 100 chacters : ");
    gets(str);
    printf("Enter the character whose presence u want to check : ");
    scanf("%c",&c);
    int l = strlen(str);
    for(int i = 0; i < l ; i++)
    {
        if(c == str[i])
        {
            printf("'%c' is present in the string.",c);
            x = 1;
            break;
        }
        
    }
    if(x == 0)
        {
             printf("'%c' is not present in the string.",c);
        }
    return 0;
}