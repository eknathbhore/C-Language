#include<stdio.h>

int product(int,float);

void main()
{
        int no1;
        float no2,z;
        
        printf("Enetr integer :");
        scanf("%d",&no1);
        
        printf("Eneter float number :");
        scanf("%f",&no2);
        
        z = product(no1,no2);
        
        printf("product is %.2f",z);
}
int product(int x,float y)
{
        float ans;
        
        ans = x*y;
        
        return(ans);
}
