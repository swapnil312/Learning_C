// Write a program to determine whether a character entered by the user is lowercase or not.
#include <stdio.h>
int main()
{
    char c;
    int x;
    printf("Enter a character : ");
    scanf("%c", &c);
    x = (int)c;
    
    if(x >= 65 && x <= 90)
    {
        printf("%c is in uppercase.",c);
    }
    else if(x >= 97 && x <= 102)
    {
        printf("%c is in lowercase.",c);
    }
    else
    {
        printf("Please, enter a letter.");
    }
}