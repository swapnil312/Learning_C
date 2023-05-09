// Create an array of 3x10 containing multiplication table of 2, 7, and 9.
# include <stdio.h>
int main()
    {
        int a[3][10];
        
        for(int i = 0 ; i < 3; i++)
        {
            int x;
            switch(i)
            {
                case 0:
                x = 2;
                break;
                case 1:
                x = 7;
                break;
                case 2:
                x = 9;
                break;
            }            
            for(int j = 0; j < 10; j++)
            {
                
                a[i][j] = x*(j+1);
                
            }
        }
        printf("\nPrinting the array _ _ _\n");
        for(int i = 0 ; i < 3; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
