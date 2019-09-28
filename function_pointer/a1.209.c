//............Without using recursion............//

#include<stdio.h>

void positiveint();

void main()
{
        positiveint();       
}

void positiveint()
{
        int no,sum=0,i,no1;

        printf("Enter five digit number : ");
        scanf("%d",&no);
 
        for(i=0;i<=no;i++)
        {
                no1 = no % 10;
                no = no / 10;
                sum = sum + no1;
        }
        
        printf("sum is : %d",sum);
        
}
