//write your full code
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vertices,edges,start,end,weight,i,j;
    char direction;


    scanf("%d",&vertices);
     if(vertices>0)
     {
        scanf("\n%d",&edges);
        scanf("\n%c",&direction);

        int **graph=(int**)malloc(sizeof(int**)*vertices);
       for(i=0;i<vertices;i++)
       {
           *(graph+i)=(int*)calloc(sizeof(int*),vertices);
       }
       for(i=0;i<edges;i++)
       {



            scanf("\n%d%d%d",&start,&end,&weight);
            graph[start-1][end-1]=weight;
            if(direction=='D')
                graph[end-1][start-1]=weight;

        }

        for(i=0;i<vertices;i++)
        {
            for(j=0;j<vertices;j++)
            {
                printf("%d ",graph[i][j]);
            }
            printf("\n");
        }

     }
     else
     {
         printf("No Graph Created");
     }
    return 0;
}
