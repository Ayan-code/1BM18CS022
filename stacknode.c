#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

typedef struct node* NODE;

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

NODE push(NODE head,int item)
{
  NODE p;
   p=getnode();
   if(head==NULL)
   {
    p->data=item;
    p->next=NULL;
    head=p;
   }
   else
   {
    p->data=item;
    p->next=head;
    head=p;
   }
   return head;
}

NODE pop(NODE head)
{
 NODE p=head;
 if(head==NULL)
 {
  printf("\n List is Empty!!");
  return head;
 }
 printf("\n NODE deleted:%d\n",p->data);
 head=p->next;
 free(p);
 return head;
}

void display(NODE head)
{
  NODE p;
  if(head==NULL)
  {
    printf("LIST is empty!!\n");
    exit(0);
  }
  else
  {
   p=head;
   while(p->next!=NULL)
   {
     printf("\n %d",p->data);
     p=p->next;
   }
  }
} 
  
void main()
{
  NODE head;
  int ch,ele,x;
  head=getnode();
  while(ch!=4)
  {
  printf("Enter your choice: \n1 PUSH \n2 POP \n3 Display \n4 Exit:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("\n Enter the element to push:");
           scanf("%d",&ele);
           head=push(head,ele);
           break;
   case 2: head=pop(head);
           break;
   case 3: display(head);
           break;
   case 4: exit(0);
   default: printf("\n Wrong choice!!");
  }
  }
}

