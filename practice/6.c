#include<stdio.h>
#include<math.h>
void main()
{
        int ans,count = 3;
        ans = pow(count,10);
        
        printf("%d",ans);

}
int pow(int n1,int n2)
{
        
        int n1=10,n2,ans=0;
        int n3;
        
        n3 = n1;
        
        while(n2>ans)
        {
                n3 = n3*n1;
                n1--;
        }
      //  printf("%d",n3);
}
/*
       // int n1,n2,ans=0;
        int n3,count = 0;
        
     //   printf("Enter two number : ");
       // scanf("%d%d",&n1,&n2);
        
        n3 = 10;//n1;
        
        while(count<n3)
        {
                n3 = n3*x;
                x--;
        }
        //printf("%d",n3);
        

}*/
