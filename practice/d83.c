#include<stdio.h>

void main()
{
  
  int yr, a, lyrs, day;
  printf("Enter the year: ");
  scanf("%d",&yr);
  a=yr-1;
  lyrs=a/4;
  day=(a+ lyrs)%7;
  if (day==1)
      printf("\nMonday\n");
  else if (day==2)
     printf("\nTuesday\n");
    //cout<<”\nTuesday”;
  else if (day==3)
    printf("\nWednesday\n");
    //cout<<”\nWednesday”;
  else if (day==4)
     printf("Thursday\n");
    //cout<<”\nThursday”;
  else if (day==5)
     printf("\nFriday\n");
    //cout<<”\nFriday”;
  else if (day==6)
     printf("\nSaturday\n");
    //cout<<”\nSaturday”;
  else if (day==7)
     printf("\nSunday\n");
    //cout<<”\nSunday”;
  else
     printf("\nErrorrrrr\n");
    //cout<<”\nErrorrrrr”
  
}

