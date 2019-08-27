#include<stdio.h>
#include<ctype.h>
void push(int v,int s[100],int *t);
void pop(int s[100],int *t);
void main()
{
	 int arr[100],b[100];
	 int i,n,top=-1;
	 int opr1,opr2,res;
	 printf("\n Enter the size of postfix expression:");
	 scanf("%d",&n);
	 printf("\n Enter the Postfix expression:");
	 for(i=0;i<n;i++)
	 {
		 scanf("%d",&arr[i]);
		 if(isdigit(arr[i]))
		{
			 push(arr[i],b,&top);
		}
		else if(arr[i]=='+'||arr[i]=='-'||arr[i]==*||arr[i]=='/')
		{
			opr1=pop(b,&top);
			opr2=pop(b,&top);
			if(arr[i]=='+')
			{
				res=opr2+opr1;
				push(res,b,&top);
			}
			else if(arr[i]=='-')
			{
				res=opr2-opr1;
				push(res,b,&top);
			}
			else if(arr[i]=='*')
			{
				res=opr2*opr1;
				push(res,b,&top);
			}
			else if(arr[i]=='/')
			{
				res=opr2/opr1;
				push(res,b,&top);
			}
			else
			   continue;
		}