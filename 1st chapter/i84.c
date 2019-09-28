#include<stdio.h>

void main()
{
        int length,breadth,area,perimeter;
        

        
        printf("Enter length of rectangle : ");
        scanf("%d",&length);
        
        printf("Enter breadth of rectangle : ");
        scanf("%d",&breadth);
        
        area = length * breadth;
        
        printf("\nArea of rectangle is : %d",area);


        perimeter = (2*length) + (2*breadth);
        
        printf("\nPerimeter of rectangle : %d",perimeter);

        
        if(area > perimeter)
         printf("\nArea is greater than its perimeter\n");
        if(area < perimeter)
         printf("\nPerimeter is graeater than its area\n");
         
}
