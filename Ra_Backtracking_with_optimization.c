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
int maze(int arr[num][num],int x,int y,int sol[num][num])
{
    if((x==num-1 && y==num-1) && arr[x][y]==1)
    {
        sol[x][y]=1;
        return 1;
    }
    else
    {
        if(isValid(arr,x,y)==1)
        {
            if(sol[x][y]==1)
            return 0;
            sol[x][y]=1;
            if (maze(arr,x,y+1,sol)==1)
                return 1;

            if (maze(arr,x+1,y,sol)==1)
                return 1;

            sol[x][y]=0;

            return 0;
        }
    }
    return 0;
}

void Solutionmaze(int arr[num][num])
{
    int sol[num][num];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            sol[i][j]=0;
        }
    }

    if(maze(arr,0,0,sol)==0)
    {
        printf("Rat cannot reach cheese");
    }
    else
    {
        printf("Yes, Rat can reach the cheese");
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                printf("%d ",sol[i][j]);
            }
            printf("\n");
        }
    }
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


    Solutionmaze(rat);

    return 0;


}
