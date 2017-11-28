#include<stdio.h>
int main()
{
    int a,s,d=0,f=0,g=0,h=0,j=0,k=0;
    scanf("%d %d",&a,&s);

    if(a>0)
    {
        if(0<s)
        {
            d=s-1;
            f=s*d;
            g=a-f;
            if(0<g)
            {
                printf("%d %d\n",d,g);
            }
            else
            {
                j=-(g);
                printf("%d %d\n",d,j);
            }

        }
        else
        {
            d=s+1;
            f=s*d;
            g=a-f;

            if(0<g)
            {
                printf("%d %d\n",d,g);
            }
            else
            {
                j=-(g);
                printf("%d %d\n",d,j);
            }

        }
    }
    else
    {
        f=(-s);
        d=s*(-s);
        g=(a-d);

        if(0<g)
        {
            printf("%d %d\n",f,g);
        }
        else
        {
            j=-(g);
            printf("%d %d\n",f,j);
        }


    }


    return 0;
}
