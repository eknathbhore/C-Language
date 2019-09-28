/*#include<stdio.h>

void main()
{
       int row,pr,rev,sp;
       
       for(row = 71;row >= 65;row--)
       {

               
               for(pr = 65 ;pr <= row ;pr++)
                {
                        printf("%c",pr);
                }
                
                for(sp=row+1; sp<=71; sp++)
                {
                        if(sp==71)
                        {
                                printf(" ");
                        }
                        if(sp<71)
                             printf("  ");
                      
                 } 
                for(rev = row;pr >= 65;pr--)
                {
                        if(rev==71)
                        {
                                 continue; 
                         }
                     printf("%c",rev);
               }
                printf("\n");
               }        
}*/

#include<stdio.h>

void main()
{

int i,j,k,l;

for(i=71;i>=65;i--) {

/* loop for printing ascending letters */

for(j=65;j<=i;j++) {

printf("%c ",j);

}

/* loop for making a space between patterns */

for(k=i+1;k<=71;k++) {

if(k==71)
printf("  ");

if(k<71)
printf("    ");
}

/* loop to print descending letters */

for(l=i;l>=65;l--) {

if(l==71) {     /* to skip printing 'G' twice */
continue;
}

printf("%c ",l);

}

printf("\n");
}


}
