#include<stdio.h>

void main()
{
        int i,j,k=1;
        
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=i;j++)
                {
                        printf("%d",k);
                        
                        k++;
                }
                
                printf("\n");
        }
}

/*
1
23
456
*/
