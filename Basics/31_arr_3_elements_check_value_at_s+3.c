// If s[3] is a 1-D array of integers then *(s+2) refers to which element.

# include <stdio.h>
int main()
{
    int s[3];
    printf("Enter elements of array...\n");
    for (int i = 0; i < 3; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&s[i]);
    }
    int x = *(s+2);
    printf("Value at (s+2) is %d.",x);
    return 0;
}
// If s[3] is a 1-D array of integers then *(s+2) refers to third element.