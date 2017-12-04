#include<stdio.h>
int main()
{
    int a,s,d,f,g,h,j,k,l;
    while(1){
    scanf("%d%d%d%d",&a,&s,&d,&f);
    if(a==0 && s==0 && d==0 && f==0)
    {
        break;
    }

    if(((a-d)==0) && ((s-f)==0))
    {
        printf("0\n");
    }
   else if((a-d)==(s-f) || -(a-d)==(s-f) || (s-f)==(a-d)|| -(s-f)==(a-d)|| (a-d)==0 && -(s-f)|| (s-f)==0 && -(a-d))
    {
        printf("1\n");
    }

    else
    {
       printf("2\n");
    }


    }
    return 0;
}
