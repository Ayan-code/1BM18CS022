#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *lchild;
   struct node *rchild;
};
typedef struct node* NODE;
NODE getnode(int item)
{
  NODE p;
  p=(NODE)malloc(sizeof(struct node));
  p->data=item;
  p->lchild=NULL;
  p->rchild=NULL;
  return p;
}

NODE insert(NODE root,int item)
{
  if(root==NULL)
      return getnode(item);
  if(item<root->data)
      root->lchild=insert(root->lchild,item);
  else if(item>=root->data)
      root->rchild=insert(root->rchild,item);
  return root;
}

void inorder(NODE root)
{
   if(root==NULL)
        return;
   inorder(root->lchild);
   printf("%d ",root->data);
   inorder(root->rchild);
}

void preorder(NODE root)
{
  if(root==NULL)
     return;
  printf("%d ",root->data);
  preorder(root->lchild);
  preorder(root->rchild);
}

void postorder(NODE root)
{
  if(root==NULL)
     return;
  postorder(root->lchild);
  postorder(root->rchild);
  printf("%d ",root->data);
}

void main()
{
   NODE root=NULL;
   int val,n=0;
   while(n!=5)
   {
        printf("\n Enter your choice:\n1.Insert \n2.Inorder \n3.Preorder \n4.Postorder \n5.Exit ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: printf("\n Enter value to insert:");
                    scanf("%d",&val);
                    root=insert(root,val);
                    break;
            case 2: inorder(root);
                    break;
            case 3: preorder(root);
                    break;
            case 4: postorder(root);
                    break;
            case 5: break;
            default: printf("\n wrong choice!!");
        }
   }
}


