#include<stdio.h>

void main()
{
        int year;
        
        printf("Enter any year : ");
        scanf("%d",&year);
        
        if(year % 4 == 0)
         {
            if(year % 100 == 0) //....not gain.....remember that thing
            {
              if(year % 400 == 0)
               {
                  printf("%d is leap year");     
               }      
               else
                printf("%d is not leap year");
            }
            else
             printf("%d is leap year",year);
        }
        else
         printf("%d is not leap year\n",year);
        
        //return 0;
}
