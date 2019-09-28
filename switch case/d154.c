
        
#include<stdio.h>

#include<string.h>

void main()
{

        char i[20],k[] ='first class';//,l[]="second class",m[]="third class";
        int j;
        
        printf("Enter your class(use small charcter) : ");
        scanf("%s",&i);
        
        printf("Enetr how many number of subject you failed ? : ");
        scanf("%d\n",&j);
        
        switch(1)
        {
                case 1 :
                  {
                        if(i[20] == k[20])
                                {
                                        if(j<=3)
                                        {
                                                printf("\nYou got 5 marks grace per subject\n");
                                        }
                                        else
                                        {
                                                printf("\nYou are not fit in grace systeam\n");
                                        }
                                }
                                break;
                  }
         }
                  /*
                    case 2 :
                  {
                        if(i[15] = l[])
                                {
                                        if(j<=2)
                                        {
                                                printf("\nYou got 4 marks grace per subject\n");
                                        }
                                        else
                                        {
                                                printf("\nYou are not fit in grace systeam\n");
                                        }
                                }
                                break;
                  }
                    case 3 :
                  {
                        if(i[15] = m[])
                                {
                                        if(j==1)
                                        {
                                                printf("\nYou got 5 marks grace per subject\n");
                                        }
                                        else
                                        {
                                                printf("\nYou are not fit in grace systeam\n");
                                        }
                                }
                                break;
                  }*/
}





