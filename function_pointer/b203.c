#include<stdio.h>

int power(int,int);

void main()
{
        int a,b,z;
        
        printf("Enetr number : ");
        scanf("%d",&a);
        
        printf("Enetr value for power : ");
        scanf("%d",&b);
        
        z = power(a,b);
        
        printf("%d\n",z);
}
int power(int x,int y)
{
        int ans = 1,k;
        k = x;
        while(y>=1)
        {
                ans = x * k;
                y--;
        }
        
        return(ans);
}

