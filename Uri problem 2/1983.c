#include<stdio.h>
int main()
{
    int a,d,f,g,h,j,k=0,i,max2=0;
    scanf("%d",&a);
    int arr[a];
    double arr2[a],max=0;
    for(i=0;i<a;i++)
    {
        scanf("%d %lf",&arr[i],&arr2[i]);
        if(arr2[i]>=8 && arr2[i]<=10)
        {
            if(max<arr2[i])
            {
                max=arr2[i];
                max2=arr[i];
                k++;

            }
        }
    }
    if(k!=0)
    {
        printf("%d\n",max2);
    }
    else
    {
        printf("Minimum note not reached\n");
    }




    return 0;
}
