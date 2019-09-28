#include<stdio.h>

int main()
{
        int cp,sp,lp,pp;
        
        printf("\nEnter cost price of an item : ");
        scanf("%d",&cp);
        
        printf("\nEnter selling price of an item : ");
        scanf("%d",&sp);

        lp = cp - sp;  //.....lp = loss price
        
        pp = sp - cp;  //.....pp = profit price
        
        if(cp > sp)
         printf("\nSeller has made incurred loss of price : %d ",lp); 
         
        else
        
         printf("\nSeller has made profit of price : %d \n",pp);

         
        return 0;
}
