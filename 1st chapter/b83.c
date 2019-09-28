#include<stdio.h>

int main()
{
        int  i,a;
        
        printf("Enter number : ");
        scanf("%d",&i);
        
        if(i % 2 == 0)   //.............why use '==' .....why we not use '=' sign only  ???????????
        
        printf("\nNumber is even");
        
        else
        printf("Number is odd\n");
        
        return 0;
}
