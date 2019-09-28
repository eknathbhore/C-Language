#include<stdio.h>
void main() //(int argc, const char * argv[])
{
        int matchstick = 21;
        int user,PC;
        while(matchstick >= 1) 
        {
                if(matchstick == 1)
                {
                        printf("Matchstick status is : %d\n",matchstick);
                        printf("....................You loos...............\n");// break;
                }
                
                printf("Matchstick status is : %d\n",matchstick);
                
                printf("Enter your choice(1,2,3,4) : ");
                scanf("%d",&user);
                
                printf("You pick : %d\n",user);
                
                if(user>=5 || user<=0)
                {
                        printf(".......................Invalid choice.....................\n");//continue;
                }
                
                PC = 5 - user;
                printf("Computer choice is : %d\n\n",PC);
                
                matchstick = matchstick - user - PC;
        }

}


