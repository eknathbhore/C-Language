#include<stdio.h>

void main()
{
        int a,b,ans;
        
        printf("Enter first number : ");
        scanf("%d",&a);
        
        printf("Enter second number : ");
        scanf("%d",&b);
        
        ans = add(a,b);
        
        printf("%d\n",ans);
}
int add(int X,int Y)
{
        int Z;
        Z = X + Y;
        return(Z);
}
