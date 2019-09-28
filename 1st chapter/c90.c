#include<stdio.h>

void main()
{
        float H,C,T;
        
        printf("Enter hardness of steel : ");
        scanf("%f",&H);
        
         
        printf("Enter carbon contain of steel : ");
        scanf("%f",&C);
        
         
        printf("Enter tensile strength of steel : ");
        scanf("%f",&T);
        
        if(H>50 && C<0.7 && T>5600)
          printf("\nGrade is 10\n");
        else
        if(H>50 && C<0.7)
          printf("\nGrade is 9\n");
        else
        if(C<0.7 && T>5600)
          printf("\nGrade is 8\n");
        else
        if(H>50 && T>5600)
          printf("\nGrade is 7\n");
        else
        if(H>50 || C<0.7 || T>5600)
          printf("\nGrade is 6\n");
        else
        if(H<50 && C>0.7 && T<5600) 
          printf("\nGrade is 5\n");    
}
