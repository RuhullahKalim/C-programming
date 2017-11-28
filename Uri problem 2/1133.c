#include<stdio.h>
int main()
{

    int a,s,d,f,i,j;
    scanf("%d%d",&a,&s);
    if(a<s)
    {
        for(i=a+1; i<s; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }

    if(s<a)
    {
        for(i=s+1; i<a; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);

            }
        }
    }

    return 0;
}
