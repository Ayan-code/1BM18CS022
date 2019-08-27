#include<stdio.h>
int fact(int m);
void main()
{
	 int n,i;
	 printf("Enter the number:");
	 scanf("%d",&n);
	 i=fact(n);
	 printf("\n The factorial is:%d\n",i);
}
int fact(int m)
{
	if(m==0)
	   return 1;
	else 
	   return(m*fact(m-1));
}	   