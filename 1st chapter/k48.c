#include<stdio.h>

int main()
{
        int amount;
        int note10,note50,note100;
        
        note10 = note50 = note100 = 0;
        
        printf("\nEnter the value to be withdrawn : ");
        scanf("%d",&amount);
        
        if(amount >= 100)
        {
                note100 = amount/100;
                amount  = amount - (note100 * 100);
        }

                
        if(amount >= 50)
        {
                note50 = amount/50;
                amount  = amount - (note50 * 50);
        }

        
        if(amount >= 10)
        {
                note10 = amount/10;
                amount  = amount - (note10 * 10);
        }
        
        printf("\nNotes of 100 is : %d",note100);
        printf("\nNotes of 50 is : %d",note50);
        printf("\nNotes of 10 is : %d",note10);
      
      
      
        
        return 0;
}
