#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
 
typedef struct node* NODE;

NODE getnode();
NODE ins_frn(NODE head,int item);
NODE ins_back(NODE head,int item);
NODE ins_pos(NODE head,int item,int pos);
void display(NODE head);

void main()
{
 NODE head;
 int a,b,c,pos,ch;
 head=getnode();
 while(ch!=4)
 {
 printf("Enter your choice: 1 for insert at front \n2 for insert at back \n3 insert at position \n 4 for exit");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: printf("\n Enter the element to insert at front:");
          scanf("%d",&a);
          head=ins_frn(head,a);
          break;
  case 2: printf("\n Enter the element to insert at last:");
          scanf("%d",&b);
          head=ins_back(head,b);
          break;
  case 3: printf("\n Enter the element and its position to be inserted at:");
          scanf("%d %d",&c,&pos);
          head=ins_pos(head,c,pos);
          break;
  case 4: exit(0);
  default: printf("\n wrong choice!!");
 } 
 }
 printf("\n Displaying NODES:");
 display(head);
}

NODE getnode()
{
 NODE p;
 p=(NODE)malloc(sizeof(struct node));
 if(p!=NULL)
   return p;
 else
 {
  printf("\n Memory could not be allocated!!");
  exit(0);
 }
}

NODE ins_frn(NODE head,int item)
{
  NODE p;
  p=getnode();
  p->data=item;
  p->next=NULL;
  head=p;
  return head;
}

NODE ins_back(NODE head,int item)
{
  NODE p,q;
  p=getnode();
  p->data=item;
  q=head;
  while(q->next!=NULL)
  {
   q=q->next;
  }
  q->next=p;
  p->next=NULL;
  return head;
}

NODE ins_pos(NODE head,int item,int pos)
{
  NODE prev,curr,newn;
  int c=1;
  prev=NULL;
  newn=getnode();
  newn->data=item;
  newn->next=NULL;
  if(head==NULL)
  {
    if(pos==1)
    {
      return newn;
    }
    else
    {
      printf("INvalid Position");
      return head;
    }
  }
  else if(pos==1)
  {
    newn->next=head;
    head=newn; 
    return head;
  }
  else 
  {
    curr=head;
    while(curr->next!=NULL&&c!=pos)
    {
     prev=curr;
     curr=curr->next;
     c++;
    }
    if(c==pos)
    {
      prev->next=newn;
      newn->next=curr; 
      return head;
    }
    else 
    {
      printf("Invalid position!!!!");
      return head;
    }
  }
}

void display(NODE head)
{
  NODE p;
  p=getnode();
  if(head==NULL)
  {
    printf("LIST is empty:");
    exit(0);
  }
  else
  {
   p=head;
   while(p!=NULL)
   {
     printf("\n %d",p->data);
     p=p->next;
   }
  }
} 
  

   
  
  








   
