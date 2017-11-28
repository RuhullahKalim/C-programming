#include <stdio.h>

int main()
{
    int a, s, d, i, p=0;
    int bill[21] = {7,12,22,52,10,15,25,55,105,20,30,60,110,40,70,120,100,150,102,110};
    while(1)
    {
        scanf("%d%d",&a,&s);
        d=s-a;
        if(a==0 && s==0)
        {
            break;
        }
        for(i=0; i<20; i++)
        {
            p = 0;
            if(bill[i] == d)
            {
                p = 1;
                break;
            }
        }
        if(p==1)
            printf("possible\n");
        else
        printf("impossible\n");
    }
    return 0;
}
