#include<stdio.h>

void main()
{
   char key;
   
   printf("Enter any key : ");
   scanf("%c",&key);
   
  printf("%d",key);
        if(65<=key&&key<=90)
                printf("\nCapital latter\n");
        
        if(97<=key&&key<=122)
                printf("\nSmall latter\n");
        
        if(48<=key&&key<=57)
                printf("\nDigit\n");
        if(0<=key&&key<=47||58<=key&&key<=64||91<=key&&key<=96||123<=key&&key<=127)
           printf("\nSpecial symbols\n");                       
}

