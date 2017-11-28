#include<stdio.h>
int main()
{
    int a,s,d,f=0,g,h,j,k=0,i;

    scanf("%d%d",&a,&s);
    int arr[s];
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<s; i++)
    {
        if(arr[i]>arr[i-1])
        {
            f=(arr[i]-arr[i-1]);
        }
        else
        {
            f=(arr[i-1]-arr[i]);
        }
        if(f<=a)
            k++;
    }
    //printf("%d\n",k);
    if(k==s-1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }


    return 0;
}
