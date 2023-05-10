// Write your own version of strcopy function.

# include <stdio.h>
# include <string.h>
void strcopy(char[], char[]);
void strcopy(char target[], char source[])
{
    int l = strlen(source);
    for(int i = 0; i < l; i++)
    {
        target[i] = source[i];
    }

}
int main()
{
    char s1[] = "Swapnil";
    int x = strlen(s1);
    char s2[x];
    strcopy(s2,s1);
    puts(s2);

    return 0;
}