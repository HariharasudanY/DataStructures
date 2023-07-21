//write your full code

//write your code
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left,*right;
}*root=NULL;

void append(int num)
{
    //creation of memory
    struct Node *newnode=(struct Node*) malloc(sizeof(struct Node));

    //insering data
    newnode->left=NULL;
    newnode->data=num;
    newnode->right=NULL;

    //creating a link
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        struct Node *temp=root;
        while(1)
        {
            if(num < temp->data)
            {
               if( temp->left==NULL)
               {
                   temp->left=newnode;
                   break;
               }
               else
               {
                   temp=temp->left;
               }

            }
            else
            {
                if(temp->right==NULL)
                 {
                    temp->right=newnode;
                    break;
                }
                 else
                {
                 temp=temp->right;
                }
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


int main()
{
    int num;
    do
    {
         scanf("%d",&num);
         if(num>0)
         {
            append(num);
         }
    }while(num>0);

    inorder_display(root);



    return 0;



}
