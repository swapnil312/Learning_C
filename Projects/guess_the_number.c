// We will write a program that generates a random number and asks the player to guess it. If the player's guess is higher than the actual number, 
// the program displays "Lower number plaese", Similarly if the user's guess is too low the program prints "Higher number please". 
// When the user guesses the correct answer, the program displays the number of guesses the player used to arrive at the number.

# include <stdio.h>
# include <stdlib.h>

int main()
{
    int count = 0;
    int x;
    int n;
    
    printf("\n\nI will think of a +ve number which you have to guess.\nLet's see how many guesses you take to arrive at the number _ _ _\n\n");
    
    printf("Guess the number : ");
    scanf("%d",&x);
    srand(x);
    n = rand();
    

    
    do
    {
        if(x > n)
        {
            printf("Lower number please...\n");
            printf("Guess the number : ");
            scanf("%d",&x);
            count++;
        }
        else if(x < n)
        {
            printf("Higher number please...\n");
            printf("Guess the number : ");
            scanf("%d",&x);
            count++;
        }
        else
        {
            printf("You guessed it right.\n");
            count++;
        }
    }
    while(x != n);
    if(count == 1)
    {
        printf("\n");
        printf("You guessed the number in the first attempt.");
    }
    else
    {
        printf("\nYou guessed it right.\n");
        printf("You took %d guesses to arrive at the number.",count);
    }
    printf("\n\n");
    return 0;
}
