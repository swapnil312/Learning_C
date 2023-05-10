// Write a program to decrypt the string encrypted using encrypt function is previous question.

# include <stdio.h>
# include <string.h>
void decrypt(char[]);
void decrypt(char str[])
{
    int l = strlen(str);
    for(int i =  0 ; i < l; i++)
    {
        str[i] = (char)((int)str[i] - 1);
    }
}
int main()
{
    char s[100];
    printf("Enter a string within 100 charcters : ");
    gets(s);
    decrypt(s);
    printf("Decrypted string is ");
    puts(s);

    return 0;
}