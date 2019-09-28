#include<stdio.h>

void main()
{
        int i,a[i],b=0,j;
        
        printf("Enter your array size : ");
        scanf("%d",&i);
        j = i;
        
        printf("Enter numbers : ");
        
        for(i=1;i<=j;i++)
        {
                scanf("%d",&a[i]);
        }
        
        for(i=j;i>=1;i--)
        {
                printf("%d ",a[i]);
                
                b = b + a[i];
                
        }
        
        printf("\nSum of array is : %d\n",b);
}
