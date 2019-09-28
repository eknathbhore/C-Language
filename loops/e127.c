#include<stdio.h>

void main()
{
        int n=001,m,m1,m2,m3,sum;
        int b=500,q;
        q = n;   //q=001
        while(q<b)
        {
                n = q;
                m = n%10;         //n = 153........m = 3
                m1 = m*m*m;       //m1 = 27
                n = n/10;         //n = 15

                m = n%10;         //n = 15.........m = 5
                m2 = m*m*m;       //m2 = 125
                n = n/10;         //n = 1
                
                m = n%10;         //n = 1..........m = 1
                m3 = m*m*m;       //m3 = 1
                n = n/10;         //n = 0
                
                sum = m1+m2+m3;//sum = 27 + 125 + 1 = 153 
                
                //n++;
               if(sum == q)  
               {              
                  printf("number is :%d\n",sum);
                  
                }  
                
                
               // printf("no");
                q++;
        }
        
        
}
/*
#include<stdio.h>
void main()
{
	int number, temp, digit1, digit2, digit3;

	printf("Printing all Armstrong numbers between 1 and 500:\n\n");

	number = 001;

	while (number <= 500)
	{
		digit1 = number%10;
		digit2 = (number%100) - ((number/100)*10);
		digit3 = number%1000;

		temp = (digit1*digit1*digit1) + (digit2*digit2*digit2) + (digit3*digit3*digit3);

		if (temp == number)
		{
			printf("\nAmstrong Number:%d", temp);
		}

		number++;
	}
	
}*/
