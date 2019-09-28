#include<stdio.h>

void main()
{
        int EOR,EOS,EOA;   // EOR : ege of ram...........EOS = ege of sham..........EOA = ege of ajay
        
        printf("Enter ege of ram : ");
        scanf("%d",&EOR);
        
        printf("Enter ege of sham : ");
        scanf("%d",&EOS);
          
        printf("Enter ege of ajay : ");
        scanf("%d",&EOA);
        
        if(EOA!=EOS && EOS!=EOR)
        {
        if(EOS > EOA && EOR > EOA)
                printf("\nAjay is youngest of the three");
        if(EOR > EOS && EOA > EOS)
                printf("\nSham is youngest of the three");
        if(EOA > EOR && EOS > EOR)
                printf("\nRam is youngest of the three");
        }
        else
         printf("\nEge are equal");        
      
}
