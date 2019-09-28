#include<stdio.h>
#include<stdlib.h>

void main()
{
        int n,f,p,q,m=1,i,r,ans,clrscr = 8,c=1;
        
       while(1)
        {
        
        printf("Menu \n");
        printf("1.Factorial of a number \n");
        printf("2.Prime or not \n");
        printf("3.Odd or even \n");
        printf("4.Exit \n\n");
        
   
        
        printf("Enter your choice : ");
        scanf("%d",&n);

         switch(n)
          {
                case 1:
                {
                       printf("\nEnter number to find its factirial number : ");
                       scanf("%d",&f);
                       
                       while(f>=1)
                       {
                               m = m * f;
                               f--;
                       }    
                       printf("Factorial number is : %d\n\n\n",m);   
                       break;         
                }
                
                case 2:
                {
                        printf("Enter number to check its prime or not : ");
                        scanf("%d",&p);

                        i = 2;                        

                        while(p>i)
                        {

                                if(p%i==0)
                                {
                                        printf("\nNumber is not prime\n\n\n");
                                        break;
                                }
                                i++;
                        }
                        if(p==i)
                         printf("\nNumber is prime\n\n\n");
                         break;
                }
                case 3:
                {
                        printf("Enter number to check its odd or even : ");
                        scanf("%d",&q);
                        
                        if(q%2==0)
                        {
                                printf("\nNumber is even\n\n\n");
                        }
                        else
                        {
                                printf("\nNumber is odd\n\n\n");
                        }
                }
                case 4:
                {
                        exit(0);
                }
            }
                
                  while(c<10)
                {
                         printf("%c",clrscr);
                         c++;
                }
         }
}
/*
int obj(int clrscr)
{ 
        int c;
        clrscr = 10;
        c = 1;
        
        while(c<70)
        {
                printf("%c",clrscr);
                c++;
        }
        return(clrscr);
}

*/
