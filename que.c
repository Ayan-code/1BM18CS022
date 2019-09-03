#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void insert(int item, int *r,int q[SIZE])
{
    if(*r==SIZE-1)
      {
        printf("Queue overflow!!");
        return;
      }
      *r=*r+1;
      q[*r]=item;
}
int del(int *f,int *r,int q[SIZE])
{
    int item;
  if(*f>*r)
  {
      printf("Queue underflow!!");
      return -9999;
  }
  item=q[*f];
  *f=*f-1;
  return item;
}
void display(int q[SIZE],int f,int r)
{
    int i;
    if(f>r)
    {
        printf("Queue is empty!!");
    }
    else
    {
     for(i=f;i<=r;i++)
     {
      printf("%d\n",q[i]);
     }
    }
}
void main()
{
    int f=0,r=-1,choice,ch,q[SIZE],x;
    while(choice!=4)
    {
    printf("Enter the operation to be performed on queue:\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1: printf("Enter the element to be inserted:");
                scanf("%d",&x);
                insert(x,&r,q);
                break;
        case 2: x=del(&f,&r,q);
                if(x!=-9999)
                  printf("%d is the element deleted from the queue\n",x);
                break;
        case 3: display(q,f,r);
                break;
        case 4: exit(0);
        default: printf("wrong choice\n");
                 break;
        }

    }
}
