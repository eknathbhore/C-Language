#include<stdio.h>

int main()
{
  int a,b,c,d;
  int e,total;
  float P;
  printf("\nenter marks of first sub : ");
  scanf("%d",&a);
  
  printf("\nenter marks of second sub : ");
  scanf("%d",&b);
  
  printf("\nenter marks of third sub : ");
  scanf("%d",&c);
  
  printf("\nenter marks of fourth sub : ");
  scanf("%d",&d);
  
  printf("\nenter marks of fith sub : ");
  scanf("%d",&e);
  
  total = a + b + c + d + e;
  
  printf("\naggregate is :%d",total);
  
  P = (total/5)*100;
  
  printf("\npercentage is :%f",P);
  
  return 0;
}
