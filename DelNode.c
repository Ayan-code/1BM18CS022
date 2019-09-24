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

NODE del_frn(NODE head)
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

void del_back(NODE head)
{
  NODE p=head,prev=NULL;
  if(head==NULL)
  {
   printf("\n LIST is Empty");
  }
  else
  {
   while(p->next!=NULL)
   {
    prev=p;
    p=p->next;
   }
   printf("\n The deleted node is:%d",p->data);
   free(p);
   prev->next=NULL;
  }
}

NODE del_value(NODE head,int val)
{
 NODE p=head;
 NODE prev=NULL;
 printf("2");
 if(head==NULL)
 {
   printf("\n The List is Empty");
   return head;
 }
 else
 { 
   printf("1");
   while(p->data!=val||p->next!=NULL)
   {
     prev=p;
     p=p->next;
   }
   if(p->data==val)
   {
    prev=p->next;
    printf("\n The given element is deleted!!");
    free(p);
    return head;
   }
   else
   {
     printf("\n The element is not present in the list");
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
    printf("LIST is empty!");
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
   printf("\n");
  }
} 

void main()
{
  NODE head,p,q,r,t;
  int x,ch=0,ele;
  head=getnode();
  p=getnode();
  q=getnode();
  r=getnode();
  t=getnode();
  printf("\n Enter some values for list:");
  printf("\n Element %d:",4);
  scanf("%d",&x);
  p->data=x;
  p->next=NULL;
  printf("\n Element %d:",3);
  scanf("%d",&x);
  q->data=x;
  q->next=p;
  printf("\n Element %d:",2);
  scanf("%d",&x);
  r->data=x;
  r->next=q;
  printf("\n Element %d:",1);
  scanf("%d",&x);
  t->data=x;
  t->next=r;
  head=t;
  while(ch!=4)
  {
   printf("\n Perform deletion:\n1.Front \n2.Rear \n3.Value \n4.Exit \n");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1: head=del_frn(head);
             break;
     case 2: del_back(head);
             break;
     case 3: printf("\n Enter the element to be deleted:");
             scanf("%d",&ele);
             head=del_value(head,ele);
             break;
     case 4: break;
     default: printf("\n Wrong Choice!!");
    }
   }
  printf("\n Displaying NODES:");
 display(head);
}
  
   
    
