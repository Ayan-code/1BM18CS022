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

NODE insert(NODE head,int item)
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

NODE delete(NODE head)
{
 NODE p=head;
 if(head==NULL)
 {
  printf("\n List is Empty!!");
  return head;
 }
 printf("\n NODE deleted:%d",p->data);
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
   while(p!=NULL)
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
  printf("Enter your choice: \n1 INSERT \n2 DELETE \n3 Display \n4 Exit:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("\n Enter the element to insert:");
           scanf("%d",&ele);
           head=insert(head,ele);
           break;
   case 2: head=delete(head);
           break;
   case 3: display(head);
           break;
   case 4: exit(0);
   default: printf("\n Wrong choice!!");
  }
  }
}

