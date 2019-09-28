#include<stdio.h>

void main()
{
        int n;
        
        for(n=1;n<=300;n++)              
        {
               int i=2;
           while(i<=n-1)
                {
                        if(n%i==0)
                        {
                                clrscr();
                           // break;    
                        }

                        i++;
                }
               // while(n%1!=0){               
               if(i==n)
                {        
                        printf(" %d",n);
                }
        }
}

