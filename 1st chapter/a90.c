#include<stdio.h>

int main()
{
        int yr;
        
        printf("Enter any year : ");
        scanf("%d",&yr);
        
        if(yr%4 == 0)
        {
                if(yr%100 == 0)
                {
                    if(yr%400 == 0)
                        printf("\nThis is leap year\n");   
                    else
                      printf("\nThis is not leap year\n"); 
                }
                else
                 printf("\nThis is not leap year\n");
        }
        else
         printf("\nThis is not leap year\n");
         
         return 0;
}
/*#include <stdio.h>

int main()
{
  
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    
    return 0;
}*/
