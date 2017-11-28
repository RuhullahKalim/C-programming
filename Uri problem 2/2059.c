#include<stdio.h>
int main()
{
    int a,s,d,f,g,h=0,j=0,k=0;
    scanf("%d%d%d%d%d",&a,&s,&d,&f,&g);
    h=s+d;
    if(h%2==0 && a==1 || h%2==1 && a==0)
    {

        k=1;
    }
    else
    {
        k=2;
    }
    if (f==1 && g==0 || f==0 && g==1)
    {
        k=1;
    }
     else if (f==1 && g==1)
    {

        k=2;
    }

    printf("Jogador %d ganha!\n",k);

    return 0;
}
