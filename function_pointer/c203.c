#include<stdio.h>
void one(int);
void five(int);
void ten(int);
void fifty(int);
void hundred(int);
void five_hundred(int);
void thousand(int);

void main()
{
int i, yr, j, a[3];
printf("Please Enter The Year\t");
scanf("%d",&yr);
i=0;
while(yr/10>=1)
{
a[i] = yr%10;
yr /=10;
i++;
}
for(i=3; i>=0; i--)
{
printf("%d\n", a[i]);
}
thousand(a[3]); // Call Function.
five_hundred(a[2]);
fifty(a[1]);
five(a[0]) ;
printf("\n");
}
void thousand(int a) // For Thousand (1st Digit Term)
{
printf("m");
}
void five_hundred(int a) // For Hundred (2nd Digit Term)
{
int j;
if(a>=5)
{
printf("d");
if(a>5)
{
j = a-5;
while(j>=1)
{
hundred(a);
j--;
}
}
}
else if(a<5)
{
j = a;
while(j>=1)
{
hundred(a);
j--;
}
}
}

void fifty(int a) // For Ten (3rd Digit Term)
{
int j;
if(a>=5)
{
printf("l");
if(a>5)
{
j = a-5;
while(j>=1)
{
ten(a);
j--;
}
}
}
else if(a<5)
{
j = a;
while(j>=1)
{
ten(a);
j--;
}
}
}

void five(int a) // For Unit (4th Digit Term)
{
int j;
if(a>=5)
{
printf("v");
if(a>5)
{
j = a-5;
while(j>=1)
{
one(a);
j--;
}
}
}
else if(a<5)
{
j = a;
while(j>=1)
{
one(a);
j--;
}
}
}
void hundred(int a)
{
printf("c");
}
void ten(int a)
{
printf("x");
}
void one(int a)
{
printf("i");
}

