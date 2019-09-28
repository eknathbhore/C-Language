#include<stdio.h>

void main()
{
        int X,Y,x1,x2,x3,y1,y2,y3;
        
        printf("Enter value of co-ordinate x1 :");
        scanf("%d",&x1);

        printf("Enter value of co-ordinate y1 :");
        scanf("%d",&y1);

        printf("Enter value of co-ordinate x2 :");
        scanf("%d",&x2);

        printf("Enter value of co-ordinate y2 :");
        scanf("%d",&y2);

        printf("Enter value of co-ordinate x3 :");
        scanf("%d",&x3);

        printf("Enter value of co-ordinate y3 :");
        scanf("%d",&y3);

 
        X = (x2-x1)/(y2-y1);
        
        Y = (x3-x1)/(y3-y1);
        
        if(X == Y)
         printf("\nstright line is form \n");
        else
         printf("stright line is not form\n");
}
