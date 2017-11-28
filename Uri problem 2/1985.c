#include<stdio.h>
int main()
{
    int a;
    double s,d,f=0,g=0,h=0,j=0,k=0,i,l;

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lf%lf",&s,&d);
        if(s==1001)
        {
            f=d*1.50;
        }
        else if(s==1002)
        {
            g=d*2.50;
        }
        else if(s==1003)
        {
            h=d*3.50;
        }
        else if(s==1004)
        {
            j=d*4.50;
        }
        else if(s==1005)
        {
            k=d*5.50;
        }
    }
    l=f+g+h+j+k;
    printf("%.2lf\n",l);

    return 0;
}


