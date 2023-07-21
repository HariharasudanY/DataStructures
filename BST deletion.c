#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*root;
void display(struct node*root);
void insert();
void search(struct node *newnode,struct node *root);
    struct node* minNode(struct node *root) ;
    struct node* deleteNode(struct node *root, int value);


int main()
{
int i,j,x;
    int value;
insert();
printf("enter the value to be deleted");

scanf("%d",&value);



minNode(root) ;

 deleteNode(root, value);
 display(root);

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
        if(root==0)
        {
            root=newnode;
        }
        else
        {
            search(newnode,root);
        }
        printf("Choice ");
        scanf("%d",&choice);
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
void display(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        display(root->left);
        printf("%d ",root->data);
        display(root->right);
}
}




struct node* deleteNode(struct node *root, int value) {
    int choice1=1;
    while(choice1==1)
    {


    if(root == NULL){
          return NULL;
     }
    else {

        if(value < root->data)
            root->left = deleteNode(root->left, value);


        else if(value > root->data)
            root->right = deleteNode(root->right, value);


        else {

            if(root->left == NULL && root->right == NULL)
                root = NULL;


            else if(root->left == NULL) {
                root = root->right;
            }


            else if(root->right == NULL) {
                root = root->left;
            }


            else {

                struct node *temp = minNode(root->right);

                root->data = temp->data;

                root->right = deleteNode(root->right, temp->data);
            }
        }
        return root;
    }
}
printf("enter the choice to get del");
scanf("%d",&choice1);
}


    struct node* minNode(struct node *root) {
    if (root->left != NULL)
        return minNode(root->left);
     else
        return root;

}
