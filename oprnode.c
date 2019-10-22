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

NODE rev(NODE head)
{
   NODE curr=head,prev=NULL;
   NODE newn=NULL;
   if(head==NULL)
   {
     printf("\nThe list is empty!!");
     return head;
   }
   else if(head->next==NULL)
     return head;
   else
   {
     while(curr!=NULL)
     {
       newn=curr->next;
       curr->next=prev;
       prev=curr;
       curr=newn;
     }
     head=prev;
     return head;
   }
}

NODE insert(NODE head,int item)
{

  NODE p=NULL;
  p=getnode();
  p->data=item;
  p->next=head;
  head=p;
  return head;
}

void sort(NODE head)
{
  NODE p=head,q=NULL;
  int temp;
  if(head==NULL)
      return;
  else 
  {
     while(p->next!=NULL)
     {
        q=p->next;
        while(q!=NULL)
        {
           if(p->data > q->data)
           {
              temp=q->data;
              q->data=p->data;
              p->data=temp;
           }
           q=q->next;
        }
        p=p->next;
     }
  }
}

NODE concat(NODE head1,NODE head2)
{
   NODE curr;
   if(head1==NULL)
   { 
      printf("\nLIST 1 is empty!!");
      return head2;
   }
   else if(head2==NULL)
   {
     printf("\nLIST 2 is empty!!");
     return head1;
   }
   else
   {
    curr=head1;
    while(curr->next!=NULL)
    {
      curr=curr->next;
    }
    curr->next=head2;
    return head1;
   }
}


void display(NODE head)
{
   NODE p;
   if(head==NULL)
   {
       printf("\n List is empty!!"); 
       return;    
   }
   else
   {  
       p=head;
       while(p!=NULL)
           {
             printf("%d \n",p->data);
             p=p->next;
           }
   } 
}

void main()
{
   NODE head1=NULL;
   NODE head2=NULL;
   int n=0;
   int a;
   printf("\n 1.Insert 1st list\n 2.Insert 2nd list\n 3.Sort a list\n 4.Reverse a list\n 5.Concatenate two lists\n 6.Display 1st list\n 7.Display 2nd list\n 8.EXIT ");
   while(n!=8)
   {
     printf("\n Enter your choice:");
     scanf("%d",&n);
     switch(n)
     {
       case 1: printf("\n Enter the element to insert:");
               scanf("%d",&a);
               head1=insert(head1,a);
               break;   
       case 2: printf("\n Enter the element to insert:");
               scanf("%d",&a);
               head2=insert(head2,a);
               break;          
       case 3: sort(head1);
               break;
       case 4: head1=rev(head1);
               break;
       case 5: head1=concat(head1,head2);
               printf("Concatenated\n");
               break;
       case 6: display(head1); 
               break;
       case 7: display(head2);
               break;
     }
   }
}
