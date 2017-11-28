#include<stdio.h>
int main()
{
    double a,s,d=0,f=0,g=0,h,j;
    while(scanf("%lf%lf",&a,&s)!= EOF)
    {
        f=(s/2);
        g=f*f*3.14;
        h=a/g;

        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",g);
    }



    return 0;
}
