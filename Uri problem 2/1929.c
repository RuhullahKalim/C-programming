#include<stdio.h>
int main()
{
    int a,s,d,f,arr[4],g,h,j;
    for(j=0; j<4; j++)
    {
        scanf("%d",&arr[j]);
    }
    for(a=0; a<4; a++)
    {
        for(s=a+1; s<4; s++)
        {
            if(arr[s]<arr[a])
            {
                d=arr[a];
                arr[a]=arr[s];
                arr[s]=d;
            }
        }
    }
    h=arr[0]+arr[1];
    g=arr[1]+arr[2];
    if(arr[3]<g || arr[2]<h)
    {
        printf("S\n");
    }

    else
    {
        printf("N\n");
    }

    return 0;
}
