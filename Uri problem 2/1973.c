#include<stdio.h>
int main()
{
    int a,d,i,g,h=0,j=0,k=0,l=0,count=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        k=k+arr[i];
        if(arr[i]%2==1)
        {
            count++;
        }
        else
        {
            h++;
            j=arr[i-1]-1;
        }
    }
    if(h!=0)
    {
        printf("%d %d\n",count,k-j);
    }
    else
    {
        printf("%d %d\n",count,k-count);
    }
    return 0;
}
