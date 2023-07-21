//write your code

#include<stdio.h>
int notes[]={1,2,5,10,20,50,100,200,500,2000};
int num=9;
void Min_Notes(int sum)
{
    int count=0;
    for(int i=num;i>=0;i--)
    {
        while(notes[i]<=sum)
        {
            sum=sum-notes[i];
            count=count+1;
        }
    }
    printf("%d",count);
}
int main()
{
    int sum;
    scanf("%d",&sum);
    Min_Notes(sum);

}
