#include<stdio.h>

void main()
{
        int i,j,k=1;
        
        for(i=1;i<=4;i++)
        {
                for(j=1;j<=i;j++)
                {
                        if(k==1)
                         printf("   ");
                         
                        if(k==2)
                         printf("  ");
                          
                        if(k==4)
                         printf(" ");
                           
                        printf("%d ",k);
                        k++;
                }
                printf("\n");
        }
}
