#include<stdio.h>

int fact(int x);

void main()
{
        int no,z;
        
        printf("Eneter number : ");
        scanf("%d",&no);
        
        z = fact(no);
        
        printf("%d",z);

}
int fact(int x)
{
        int ans=1;
        
        while(x>=1)
        {
        
         ans = ans * x;
         x--;
 
        }
        return(ans);
}
