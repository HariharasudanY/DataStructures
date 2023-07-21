//write your code

#include<stdio.h>
int num;
int isValid(int arr[num][num],int x, int y)
{
    if((x>=0 && x<=num-1) && (y>=0 && y<=num-1) && arr[x][y]==1)
         return 1;
    else
        return 0;
}
int maze(int arr[num][num],int x,int y)
{
    if((x==num-1 && y==num-1) && arr[x][y]==1)
    {
        return 1;
    }
    else
    {
        if(isValid(arr,x,y+1)==1)
            return maze(arr,x,y+1);
        if (isValid(arr,x+1,y)==1)
            return maze(arr,x+1,y);

            return 0;


    }
    return 0;
}


int main()
{
    int index,i,j;
    scanf("%d",&num);
    int rat[num][num];
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
         scanf("%d",&rat[i][j]);
        }
    }


    index=maze(rat,0,0);
    if(index==1)
    {
        printf("Path Exist");
    }
    else
    {
         printf("Path doesn't Exist");


    }

    return 0;


}
