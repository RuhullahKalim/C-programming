#include<stdio.h>
int main()
{
    int a,s,d,i,count=0;
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s);
        if(a==s)
        {
            count ++;
        }
    }
    printf("%d\n",count);



    return 0;
}
