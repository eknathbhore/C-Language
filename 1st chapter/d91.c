#include<stdio.h>

void main()
{
        int i;
        
        printf("Enter how many days you are late for returning this book in library : ");
        scanf("%d",&i);
        
        if(i<=5)
          printf("\nYou have 50 paise fine\n");
        else 
        if(i>=6 && i<=10)
         printf("\nYou have 1 rupee fine\n");
        else
        if(i>10 && i<30)
         printf("\nYou have 10 rupee fine\n");
        else
        if(i>30)
         printf("Your membership will be cancelled");
 

}
