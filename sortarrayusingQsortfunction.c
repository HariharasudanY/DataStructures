#include<stdio.h>
#include<stdlib.h>
int compare(const void*num1,const void*num2);

/*
struct node{
int data;
struct node*next;
struct node*prev;
}*head,*temp,*newnode;*/

int main()
{
int a[5]={9,8,6,7,5};
qsort(a,5,sizeof(int),compare);

for(int i=0;i<5;i++)
{
    printf("%d ",a[i]);

}


}

int compare(const void *num1,const void*num2)
{
int a=*(int *)num1;
int b=*(int *)num2;

if(a>b)
{
    return -1;
}
else if(a<b)
{
    return 1;
}

}
