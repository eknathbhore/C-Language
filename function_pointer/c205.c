#include<stdio.h>

void stud();

void main()
{
       
        stud();
}

void stud()
{
 int sub1,sub2,sub3,total;
 float avg;
 float per;
        
        printf("Enter marks of 1st sub : ");
        scanf("%d",&sub1);
        
        printf("Enter marks of 2nd sub : ");
        scanf("%d",&sub2);
        
        printf("Enter marks of 3rd sub : ");
        scanf("%d",&sub3);
        
        total = sub1 + sub2 + sub3;
        
        avg = total/3;
        
        per =  total*100/(300);
        
        printf("Average is : %f",avg);
        
        printf("\npercentage is : %f",per);
}       
