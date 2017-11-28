#include<stdio.h>
int main()
{
    int a,s=0,d=0,f,g,h,j,k=0,count=0;

    while(scanf("%d",&a))
    {

       count ++;
        if(count>1)
        {
            if(a==0)
            {
                break;
            }
           else if(a%2==0)
            {
                s=a*2;
                k++;
                if(k==2|| s>10 || count==2)
                {

                    d=s-2;
                    printf("%d\n",d);
                    k=0;
                }
            }
            else if(a%2==1)
            {
                s=a*2;
                k++;
                if(k==2 || s>10 ||count==2)
                {
                    d=s-1;
                    printf("%d\n",d);
                    k=0;
                }
            }
        }



    }





    return 0;
}
