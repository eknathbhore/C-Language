#include<stdio.h>

void leap(int x);

void main()
{
        int yr;
        
        printf("Eneter any year : ");
        scanf("%d",&yr);
        
        leap(yr);
        
}
void leap(int x)
{
       
                if(x%4==0)
                {
                        if(x%100==0)
                        {
                                if(x%400==0)
                                {
                                        printf("This is leap year ");
                                }
                                else
                                 printf("This is not leap year ");
                        }
                        else
                        printf("This is leap year");
                }
                else
                 printf("This is not leap year ");
                       
              
}
