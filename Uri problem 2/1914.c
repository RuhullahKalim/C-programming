#include<stdio.h>
int main()
{
    int a,s,d,f=0,i;
    char aa[100],ss[100],dd[100],ff[100];
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%s %s %s %s",&aa,&ss,&dd,&ff);
        scanf("%d %d",&s,&d);
        f=s+d;
        if(ss[0]=='P')
        {
            if(f%2==0)
            {
                printf("%s\n",aa);
            }
            else
            {
                printf("%s\n",dd);
            }
        }
        else
        {
            if(f%2==0)
            {
                printf("%s\n",dd);
            }
            else
            {
                printf("%s\n",aa);

            }
        }

    }


    return 0;
}
