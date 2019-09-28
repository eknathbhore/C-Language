#include<stdio.h>

int main()
{
        int n1,n2,X=1;
        int n3;
        printf("Enter 1st number : ");
        scanf("%d",&n1);
        printf("Enter 2nd number : ");
        scanf("%d",&n2);
        n3=n2;
        while(X<n1)
        {
                n3 = n3*n2;
                X++;
        }     
        printf(" Ans= %d\n",n3);  
     return 0; 
}
