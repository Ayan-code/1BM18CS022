#define Size 5
#include<stdio.h>
#include<stdlib.h>
void insert(int item, int *r,int q[Size],int *f)
{
    if((*f==*r+1) || (*f==0 && *r==Size-1))
      {
        printf("queue is full\n");
        return;
      }
      if(*f==-1)
      {
        *f=0;
      }
        *r=((*r)+1)%Size;
        q[*r]=item;
}
int delete(int *f,int *r,int q[Size])
{
  int item;
  if(*f==-1)
  {
    printf("Queue is empty\n");
    return -9999;
  }
  else
  {
    item=q[*f];
    if(*f==*r)
    {
      *f=-1;
      *r==1;
    }
    else
    {
      *f=((*f)+1)%Size;
    }
    return item;
  }
}
void display(int q[Size],int f,int r)
{
    int i;
    if(f==-1)
    {
        printf("queue is empty\n");
        return;
    }
    for(i=f;i!=r;i=(i+1)%Size)
    {
      printf("%d\n",q[i]);
    }
    printf("%d\n",q[i]);
}
void main()
{
    int f=-1,r=-1,choice,ch,q[Size],x;
    while(1)
    {
        printf("Enter the operation to be performed on queue:\n1.Insert an element in the queue\n2.Delete an element from the queue\n3.Display the queue\nEnter 4 to exit\n");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the element to be inserted\n");
            scanf("%d",&x);
            insert(x,&r,q,&f);
            break;
        case 2:
            x=delete(&f,&r,q);
            if(x!=-9999)
                printf("%d is the element deleted from the queue\n",x);
            break;
        case 3:
            display(q,f,r);
            break;
        case 4:
            exit(1);
        default:
            printf("wrong choice\n");
            break;
        }

    }
}




