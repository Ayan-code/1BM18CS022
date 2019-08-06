#include<stdio.h>
#include<conio.h>

void main()
{
  int m[10],i,gdp=0;
  float sgpa;
  int cd[]={4,4,3,3,4,4,2,1};
  clrscr();
  printf("\n Enter marks for the following subjects:");
  printf("\n 1->DM \n 2->DS \n 3->LD \n 4->COA \n 5->Java \n 6->MP \n 7->PW \n 8->CoI");
  for(i=0;i<8;i++)
  {
   printf("\n%d->",i+1);
   scanf("%d",&m[i]);
  }
  for(i=0;i<8;i++)
  {
   if(m[i]>=90&&m[i]<=100)
   {
     printf("\nGrade=S");
     gdp=gdp+(10*cd[i]);
   }
   else if(m[i]>=75&&m[i]<90)
   {
     printf("\nGrade=A");
     gdp=gdp+(9*cd[i]);
   }
   else if(m[i]>=60&&m[i]<75)
   {
     printf("\nGrade=B");
     gdp=gdp+(8*cd[i]);
   }
   else if(m[i]>=50&&m[i]<60)
   {
     printf("\nGrade=C");
     gdp=gdp+(7*cd[i]);
   }
   else if(m[i]>=40&&m[i]<50)
   {
     printf("\nGrade=D");
     gdp=gdp+(6*cd[i]);
   }
   else
   {
    printf("\nFail!!:");
    gdp=gdp+0;
   }
  }
  sgpa=(float)gdp/25;
  printf("\n SGPA=%f",sgpa);
  getch();
 }