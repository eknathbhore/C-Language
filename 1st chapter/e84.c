#include<stdio.h>

void main()
{
        int num,rev =0,rem,a,b;
        
        printf("Enter five digit number : ");
        scanf("%d",&num);
        b=num;
        while(num>0)
         {
                rem = num % 10;
                rev = (rev * 10) + rem;
                num /= 10;
         }
                 a=rev;
                 printf("%d\n",a);
        if(rev == b)
         printf("oringinal and revers number are equal\n");
        else
          printf("oringinal and revers number are not equal\n"); 
        
}
