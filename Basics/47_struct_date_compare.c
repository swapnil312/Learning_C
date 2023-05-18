// Write a structure capable of storing date. Write a function to compare these dates.
# include <stdio.h>
typedef struct date{
    int d,m,y;
}dt;
int compare(dt dt1, dt dt2)
{
    if(dt1.y > dt2.y)
    {
        return 1;
    }
    else if(dt1.y < dt2.y)
    {
        return -1;
    }
    else
    {
        if(dt1.m > dt2.m)
        {
            return 1;
        }
        else if(dt1.m < dt2.m)
        {
            return -1;
        }
        else
        {
            if(dt1.d > dt2.d)
            {
                return 1;
            }
            else if(dt1.d < dt2.d)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{
    dt dt1;
    dt dt2;
    printf("Enter day of first date : ");
    scanf("%d",&dt1.d);
    printf("Enter month of first date : ");
    scanf("%d",&dt1.m);
    printf("Enter year of first date : ");
    scanf("%d",&dt1.y);
    printf("Enter day of second date : ");
    scanf("%d",&dt2.d);
    printf("Enter month of second date : ");
    scanf("%d",&dt2.m);
    printf("Enter year of second date : ");
    scanf("%d",&dt2.y);
    int x = compare(dt1,dt2);
    if(x == 1)
    {
        printf("%d/%d/%d is in future relative to %d/%d/%d.",dt1.d,dt2.m,dt1.y,dt2.d,dt2.m,dt2.y);
    }
    else if(x == -1)
    {
        printf("%d/%d/%d is in past relative to %d/%d/%d.",dt1.d,dt2.m,dt1.y,dt2.d,dt2.m,dt2.y);
    }
    else if(x == 0)
    {
        printf("%d/%d/%d and %d/%d/%d are same.",dt1.d,dt2.m,dt1.y,dt2.d,dt2.m,dt2.y);
    }
    return 0;
}