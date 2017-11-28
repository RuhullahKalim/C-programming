#include<stdio.h>
int main()
{
    int a,s,d,f,i,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&s);

        if(s<2015)
        {
            j=2015-s;
            printf("%d D.C.\n",j);

        }

        else
        {
            f=s-2014;
            printf("%d A.C.\n",f);
        }
    }




    return 0;
}
