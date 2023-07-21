
//write your code
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left,*right;
}*root=NULL;

void append(int data)
{
    //creation of memory
    struct Node *newnode=(struct Node*) malloc(sizeof(struct Node));
    int flag=0;
    //insering data
    newnode->left=NULL;
    newnode->data=data;
    newnode->right=NULL;

    //creating a link
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        struct Node *temp=root,*temp1=root;
        while(1)
        {
            if(temp->left==NULL)
            {
               // printf("left leaf %d",newnode->data);
                temp->left=newnode;
               break;
            }
            else if(temp->right==NULL)
            {
               // printf("right leaf %d",newnode->data);
                temp->right=newnode;
                break;
            }
            else if(flag==0)
            {
                //printf("left child %d",newnode->data);
                temp=temp1->left;
                flag=1;
            }
            else
            {
               // printf("right child %d",newnode->data);
                temp=temp1->right;
                flag=0;
                temp1=temp1->left;
            }
        }
    }
}

void inorder_display(struct Node *temp)
{
    if(temp!=NULL)
    {
        inorder_display(temp->left);
        printf("%d ",temp->data);
        inorder_display(temp->right);
    }
}

void preorder_display(struct Node *temp)
{
    if(temp!=NULL)
    {

        printf("%d ",temp->data);
        preorder_display(temp->left);
        preorder_display(temp->right);
    }
}

void postorder_display(struct Node *temp)
{
    if(temp!=NULL)
    {
        postorder_display(temp->left);
        postorder_display(temp->right);
        printf("%d ",temp->data);

    }
}
int main()
{
    int num;
    do
    {
         scanf("%d",&num);
         if(num>0)
         append(num);

    }while(num>0);

    printf("Inorder: ");
    inorder_display(root);

     printf("\nPreorder: ");
    preorder_display(root);

     printf("\npostorder: ");
    postorder_display(root);

    return 0;



}
