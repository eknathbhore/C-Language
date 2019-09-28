 #include<stdio.h>
//#include<conio.h>

void main(void)

{

int max=0,min=0;

int temp;

int n,i;

//clrscr();

printf("what is the lenght of number set?\n");

scanf("%d",&n);

printf("\n\nNow enter the numbers\n");

for(i=1;i<=n;i++)

{

scanf("%d",&temp);

if(temp>max)max=temp;

if(i==1)min=temp;

if(temp<min)min=temp;

}

printf("\n\nThe range of set is %d",max-min);

//getch();

} 
