#include<stdio.h>

int main()
{
        int n,i=1,f=1;
        
        printf("Enter any no : ");
        scanf("%d",&n);
        
        while(i<=n)
        {
        
           f=f*i;

           i++;
        }


                   printf(" %d \n",f);     
        return 0;
}
/*
#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i=1,f=1;
  //  clrscr();
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //LOOP TO CALCULATE THE FACTORIAL OF A NUMBER
    do
    {
        f=f*i;
        i++;
    }while(i<=n);
     
    printf("\n The Factorial of %d is %d",n,f);
 //   getch();
}
*/
