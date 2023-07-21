


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*root;
void preoder();
void inoder();
void postoder();
void insert();
void search(struct node *newnode,struct node *root);


int main()
{
int i,j,x;
    int value;
insert();
    printf("\nInorder\n");
 inorder(root);

     printf("\npreorder\n");
preorder(root);

    printf("\npostorder\n");
postorder(root);

}
void insert()
{
    int choice=1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        newnode->left=0;
        newnode->right=0;
        printf("Enter the data");
        scanf("%d",&newnode->data);
        if(newnode->data >0)
        {
        if(root==0)
        {
            root=newnode;
        }
        else
        {
            search(newnode,root);
        }
        }
        else
            choice=0;


        }
}
void search(struct node *newnode,struct node *root)
{
    if((newnode->data)<(root->data)&&root->left==0)
    {
        root->left=newnode;
    }
    if((newnode->data)>(root->data)&&root->right==0)
    {
        root->right=newnode;
    }
    if((newnode->data)<(root->data)&&root->left!=0)
    {
        search(newnode,root->left);
    }
    if((newnode->data)>(root->data)&&root->right!=0)
    {
        search(newnode,root->right);
    }
}

void inorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
}
}


void preorder(struct node *root)
{

           if(root==0)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
}

}
void postorder(struct node *root)
{

             if(root==0)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
                postorder(root->left);
        postorder(root->right);
}

}
