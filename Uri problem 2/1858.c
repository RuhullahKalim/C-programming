#include<stdio.h>
int main()
{
    int a,s,d=0,f,g=1,h=0,j;
    scanf("%d",&a);
    int arr[a];
    for(j=0;j<a;j++)
    {
        scanf("%d",&arr[j]);
    }
    s=arr[d];
    for(d=0;d<a;d++)
    {
        if(arr[d]<s)
        {
            s=arr[d];
            g=d+1;
        }
    }

    printf("%d\n",g);


    return 0;
}
