#include<stdio.h>
int main()
{
 int i,n,p,q,r;
 
 printf("\nenter distance between two cities in Km ");
 scanf("%d",&i);
 
  n = i * 1000;
 
 printf("\ndistance in meter is :%d",n);
 
  p = i * 3280.839895;
  
 printf("\ndistace in feet is :%d",p);
 
 q = i * 3937.7874;
 
 printf("\ndistance in inches is :%d",q);
 
 r = i *100000;
 
 printf("\ndistace in centimeter :%d",r);
  
  
 return 0;
 }
