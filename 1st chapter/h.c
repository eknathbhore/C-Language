#include<stdio.h>

void main()
{
        int i,j;
        
        printf("Enter number : ");
        scanf("%d",&i);
        
        if(i<0)
         j = -i;
        else
         j = i;
         
         printf("Absolute value of number is : %d\n",j);

}
