#include<stdio.h>

void fun();

int no[5],i,sum=0;
float avg;

void main()
{
        
        
        printf("Enter five number :  ");
        
        for(i=0;i<=4;i++)
        {
              
                scanf("%d",&no[i]);
        
        }

        fun();
        
        printf("Sum is : %d",sum);
        
        printf("\nAvrage is : %f",avg);

}
void fun()
{
         
        for(i=0;i<=4;i++)
        {
                sum = sum + no[i];
        }    
        
        avg = sum/5;    
}

