#include<stdio.h>

void main()
{
        int i,j,k,l;
        
        for(i=71;i>=65;i--)
        {
                for(j=65;j<=i;j++)            //A B C D E F G 
                {                             //A B C D E F   
                                              //A B C D E       
                        printf("%c ",j);      //A B C D           
                                              //A B C               
                }                             //A B                   
                                              //A
                                              
                for(k=i+1;k<=71;k++)                 
                {                                    
                        if(k==71)                    
                        {                            
                                printf("  ");       
                        }                           
                        if(k<71)                    
                        {                            //A B C D E F G F E D C B A 
                                                     //A B C D E F   F E D C B A 
                            printf("   ");           //A B C D E       E D C B A 
                                                     //A B C D           D C B A 
                        }                            //A B C               C B A 
                                                     //A B                   B A 
                 }                                   //A                       A                                                           
                for(l=i;l>=65;l--)
                {
                        if(l==71)
                        continue;
                        
                        printf("%c ",l);
                }
                printf("\n");
        }
        
        
}


