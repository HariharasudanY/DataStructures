#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //write your code
    char str[100],conv_str[100];
    int i,count;

    scanf("%s",str);
    int len=strlen(str);
    int k=0;
    for(i=0;i<len;i++)
    {

            conv_str[k++]='#';
            conv_str[k++]=str[i];
            if(k==(len-1))
            {
                 conv_str[k++]='#';
            }


    }
    conv_str[k]='\0';

    int *freq=(int*)calloc(k,sizeof(int*));

    for(i=1;i<k;i++)
    {
        int j=1;
        count=0;
        while((conv_str[i+j]==conv_str[i-j]))
        {

            j++;
            count++;

        }
        freq[i]=count;

    }
     int max=0,idx=-1;

     for(i=0;i<k;i++)
     {
         if(freq[i]>max)
         {
             max=freq[i];
             idx=i;
         }
     }

    if(max!=1)
    {
        for(i=idx-max;i<=idx+max;i++)
        {
            if(conv_str[i]!='#')
            printf("%c",conv_str[i]);
        }
    }
    else
    {
        printf("No Palindromic substring is present");
    }

    return 0;
}
