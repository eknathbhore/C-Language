#include<stdio.h>

void main()
{
        int n,m,sum = 0,q;
        
        printf("Enter number : ");
        scanf("%d",&n);
        
        while(n>0)
        {
                m = n%10;
                sum = (sum*10)+m;
                n = n/10; 
        }
                printf("%d\n",sum);
                
        q = sum;        
        printf("Even number is : \n");
                
        while(sum > 0)
        {
                m = sum%10;
                
                if(m%2 == 0)
                {
                        printf("%d \n",m);
                }
                sum = sum/10;
                
              
        }
         printf("odd number is : \n");
        sum = q; 
        
         while(sum > 0)
        {
                m = sum%10;
                
                if(m%2 == 1)
                {
                        printf("%d \n",m);
                }
                sum = sum/10;
                
              
        }
                
}
