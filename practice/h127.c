#include<stdio.h>
#include<math.h>
int main()
{
        int decimal_number,remainder,octal_number = 0;
        double count = 0;
        
        printf("Enter a decimal number :\t");                //122
        scanf("%d",&decimal_number);
     //   n3 = 10;
        while(decimal_number != 0)                           
        {                                                    
                remainder = decimal_number % 8;              //122 % 8 = 2......7..............1
              /*  while(count<=10)                             
                {                                          
                        n3 = n3 * 10;
                        count++;       
                }*/

                octal_number = octal_number + remainder * pow(10,count);//0+15*(10^0) = 2...........2+7(10^1) = 72.....72+1*(10^2) = 172
                decimal_number = decimal_number / 8;                    //15............1.........0
                count++;                                                //1.........2
        } 
        printf("\nOctal Equivalent :\t%d\n",octal_number);
        return 0;
}
double pow(double x,double y)
{
        int n1,n2,ans=0;
        int n3,count = 0;
        
     //   printf("Enter two number : ");
       // scanf("%d%d",&n1,&n2);
        
        n3 = x;//n1;
        
        while(count<n3)
        {
                n3 = n3*x;
                x--;
        }
        //printf("%d",n3);
        }
/*#include<stdio.h>

void main()
{
        int n1,n2,ans=0;
        int n3;
        
        printf("Enter two number : ");
        scanf("%d%d",&n1,&n2);//2,3
        
        n3 = n1;//n3 = 2
        
        while(n2>ans)
        {
                n3 = n3*n1;//2*2=4
                n1--;1
        }
        printf("%d",n3);
}*/




