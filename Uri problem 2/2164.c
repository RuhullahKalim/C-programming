#include<stdio.h>
#include<math.h>
int main()
{
    double a,s,d,f,g,h,j,k,l;
    scanf("%lf",&a);
    s=1+sqrt(5);
    d=s/2;
    f=1-sqrt(5);
    g=f/2;
    h=pow(d,a)-pow(g,a);
    j=h/sqrt(5);

    printf("%.1lf\n",j);



    return 0;
}
