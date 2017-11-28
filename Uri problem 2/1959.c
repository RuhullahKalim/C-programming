#include<stdio.h>
int main()
{
    long long int a,s,d=0,f;
    scanf("%lld%lld",&a,&s);
    if(a>s)
    {
        d=a*s;
        printf("%lld\n",d);
    }

    return 0;

}
