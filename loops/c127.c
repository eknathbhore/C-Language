#include<stdio.h>

void main()
{
        int n1,n2,ans=0;
        int n3;
        
        printf("Enter two number : ");
        scanf("%d%d",&n1,&n2);
        
        n3 = n1;
        
        while(n2>ans)
        {
                n3 = n3*n1;
                n1--;
        }
        printf("%d",n3);
}
