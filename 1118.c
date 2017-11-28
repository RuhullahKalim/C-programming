#include<stdio.h>
int main()
{
    int p,i,j;
    double a,s=0,d=0,f=0,g=0,h,k,l,count=0;
    while(1)
    {

        for(j=0; j<100; j++)
        {
            scanf("%lf",&a);
            if(a<0 || 10<a)
            {
                printf("nota invalida\n");
            }
            else   if(a>=0 && a<=10)
            {
                s=s+a;
                count ++;
                if(count ==2)
                {
                    d=s/2;
                    printf("media = %.2lf\n",d);


                    count=0;
                    break;
                }
            }
        }

        for(i=0; i<100; i++)
        {
            scanf("%d",&p);
            printf("novo calculo (1-sim 2-nao)\n");
            if(p==1)
            {


                count =0;
                s=0;
                break ;

            }
            else if(p==2)
            {

                break ;

            }
        }
        if(p==1)continue;
        else if(p==2)break;





    }


    return 0;
}
