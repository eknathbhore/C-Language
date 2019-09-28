#include<stdio.h>

void main()
{
        int i,j,k;
        //j = 1;
        i = 2;
        
        
        for(k=1;k<=300;k++)
        {
                while(i<=k - 1)
                {
                        if(k%i == 0)
                        {
                                printf("    ");
                                break;
                        }
                        i++;
                }
                if(i==k)
                {
                        printf("%d ",k);
                        continue;
                }
        }
}
