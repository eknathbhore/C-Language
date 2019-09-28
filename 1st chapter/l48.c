#include<stdio.h>

int main()
{
        int TSP;  //total selling price
        int TPE;  //total price earned
        int TCP;  //total cost price
        int CPFOI;//cost price for one item
        
        printf("Total selling price of 15 items is : ");
        scanf("%d",&TSP);
        
        printf("Total profit earned is : ");
        scanf("%d",&TPE);

        TCP = TSP - TPE;
        
        CPFOI = TCP/15;
        
        printf("Cost price for one item is : %d",CPFOI);
        
        return 0;
        
}
