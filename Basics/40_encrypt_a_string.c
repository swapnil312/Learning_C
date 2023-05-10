// Write a program to encrypt a string by adding 1 to the ascii value to its charcters.
# include <stdio.h>
# include <string.h>
void encrypt(char[]);
void encrypt(char str[])
{
    int l = strlen(str);
    for(int i = 0 ; i < l; i++)
    {
        str[i] = (char)((int)str[i] + 1);
    }
}
int main()
{
    char str[100];
    printf("Enter a string within the length of 100 charcters : ");
    gets(str);
    encrypt(str);
    printf("Your string is encrypted....");
    // puts(str);
    
    return 0;
}