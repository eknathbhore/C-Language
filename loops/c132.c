#include<stdio.h>

void main()
{
        int i,ans,n;
        
        //for(i=1;i<=7;i++)
        //{
        ans = (1/fact(n))+(2/fact(n))+(3/fact(n))+(4/fact(n))+(5/fact(n))+(6/fact(n))+(7/fact(n));
          // ans = n/(f()*n) + (n+1)/(f()*(n+1));    
        //}
        printf("%d",&ans);

}

int fact(f)
{
  int n = 7,i=1,f=1;
        
        //printf("Enter any no : ");
      //  scanf("%d",&n);
        
        while(i<=n)
        {
        
           f=f*i;

           i++;
        }


                  printf(" %d \n",f);     
}
