      #include<stdio.h>
#include<stdlib.h>
      struct node
     {
          int data;
          struct node *left, *right;
      };
      struct node *create();
void inorder(struct node* temp);
      void main()
    {
       struct node *root;   + -

       root = create();
       inorder(root);
    }
struct node *create()
{

   struct node *newnode;
   int data,c=1,h,sum=0;
   int choice;
   newnode = (struct node *)malloc(sizeof(struct node));
   printf("\nPress 0 to exit");
   printf("\nPress 1 for new node");
   printf("\nEnter your choice : \n");
   scanf("%d",&choice);
   if(choice==0)
{
return 0;
}
else
{
   printf("Enter the data:");
   scanf("%d", &data);

   newnode->data = data;
   printf("Enter the left child of %d", data);
   newnode->left = create();
printf("Enter the right child of %d", data);
newnode->right = create();
return newnode;
}


}

void inorder(struct node* temp)
{
    if(temp==0)
    {
        return ;
    }
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);

}
