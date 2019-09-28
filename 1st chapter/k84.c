//........................................copy paste program..........................................


#include<stdio.h>

void main()
{
  int x,y,r;
  int dis,d;
  
  printf("\nEnter the radius of the circle and coordinates of the point(x,y):");
  scanf("%d%d%d",&r,&x,&y);
  dis = x*x+y*y;
  d = r*r;
  if(dis == d)
      printf("\nPoint is on the circle");
  else
  {
      if(dis>d)
           printf("Point is outside the circle");
      else
           printf("Point is inside the circle");
  }
  printf("\n press any key to exit.\n");
  
}
