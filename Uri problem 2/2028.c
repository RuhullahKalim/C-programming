#include<stdio.h>

int main()
{
    int a,s,d,f,g,h,j,k=0,count2=0,i;
    while(scanf("%d",&a)!=EOF)
    {
        s=a;
        count2=((a*(a+1))/2)+1;
        k++;
        printf("Caso %d: %d numero\n",k,count2);
        count2 =0;
        for(i=0; i<=a; i++)
        {
            d=i;
            printf("%d ",d);

            for(j=0; j<d-1; j++)
            {
                printf("%d ",d);

            }
        }
        printf("\n");


    }





    return 0;
}
