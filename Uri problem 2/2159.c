#include<stdio.h>
#include<math.h>
int main()
{
    double a,s=0,d=0,f,g=0;
    scanf("%lf",&a);
    s= log(a);
    d=(a/s);

    g=(1.25506*d);

    printf("%.1lf %.1lf\n",d,g);

    return 0;
}
