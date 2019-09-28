#include<stdio.h>

void main()
{
  float m = 52,w,Im = 35,Iw,Tl = 48,Ti,im,iw;
  
  Ti = 100 - Tl;
  
  Iw = Ti - Im;
  
  im = (Im/100) * 80000;
  
  iw = (Iw/100) * 80000;
  
  printf("\nno. of illiterat population of men : %.1f",im);
  
  printf("\nno. of illiterat population of women : %.1f",iw);
  
  
}



