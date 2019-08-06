#include<stdio.h>
#include<conio.h>
struct stumarks
{
 int LD;
 int COA;
 int MP;
 int DM;
 int JAVA;
 int DS;
 int PW;
 int CI;
};
void main()
{
  struct stumarks S1;
  clrscr();
  printf("Enter the marks:");
  printf("\nLogic Design:");
  scanf("%d",&S1.LD);
  printf("\nComputer Organisation & Architecture:");
  scanf("%d",&S1.COA);
  printf("\nMicroProcessors:");
  scanf("%d",&S1.MP);
  printf("\nDiscrete Maths:");
  scanf("%d",&S1.DM);
  printf("\nJAVA:");
  scanf("%d",&S1.JAVA);
  printf("\nData Structurs:");
  scanf("%d",&S1.DS);
  printf("\nProject Work:");
  scanf("%d",&S1.PW);
  printf("\nConstituition of India:");
  scanf("%d",&S1.CI);
  printf("\n View the marks for Student 1 -->");
  printf("\n Logic Design:%d",S1.LD);
  printf("\n Computer organisation & Architecture:%d",S1.COA);
  printf("\n MicroProcessors:%d",S1.MP);
  printf("\n Discrete Maths:%d",S1.DM);
  printf("\n JAVA:%d",S1.JAVA);
  printf("\n Data Structures:%d",S1.DS);
  printf("\n Project Work:%d",S1.PW);
  printf("\n Constitution of India:%d",S1.CI);
  getch();
}



