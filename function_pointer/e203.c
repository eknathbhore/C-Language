#include<stdio.h>

void prime_factor(int);

void main()
{
        int no;
        
        printf("Enetr any number : ");
        scanf("%d",&no);
        
        prime_factor(no);
}
void prime_factor(int x)
{
        int i=2,j=x;
        
        while(i<=j)
        {
                if(j%i==0)
                {
                        j = j/i;
                        printf("%d ",i);
                }
                else
                i++;
        }
}
