#include<stdio.h>
void p_factor(int);
void main()
{
int no, factor;
printf("Please Enter The no\t");
scanf("%d", &no);
p_factor(no);
}

void p_factor(int a)
{
int i=2, j= a;
while(i<=j)
{
if (j%i==0)
{
j =j/i;
printf(" %d ", i);
}
else
i++;
}
}
