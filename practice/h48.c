#include<stdio.h>

int main()
{
        int no,rev=0, rem;
        
        printf("Enter Number to reverse: ");
        scanf("%d",&no);
        printf("%d \n",no);
        
        while(no > 0) 
        {
                rem = no % 10;
                rev = rev * 10 + rem;
                no /=10;
        }
        printf("The reverse no is: %d \n",rev);
        //printf("%d \n",rem);
        return 0;
}

