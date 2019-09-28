#include<stdio.h>

void main()
{
        int x,y;
        
        printf("Enter value for (x,y) coordinate : ");
        scanf("%d%d",&x,&y);
        
        if(x==0&&y==0)
        {
                printf("\nCoordinate lies on origin\n");
        }
        
        
        if(x>0&&y==0||x<0);
        {
                printf("\nCoordinate lies on X-Axis\n");
        }
        
        
        if(x==0&&y>0||y<0)
        {
                printf("\nCoordinate lies on Y-Axis\n");
        }
        
        if(x>0&&y>0||x<0&&y<0)
        {
                printf("\ninvalid coordinate\n");
        }
        
        
        
        
        
}
