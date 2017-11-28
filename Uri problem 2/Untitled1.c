#include<stdio.h>
#include<math.h>
int main()
{
    int a,s,d=0,f=0,g,i,j,arr[6]={2,5,10,20,50,100};

        for(i=0;i<6;i++)
        {
            for(j=0,g=0;j<6;j++)
            {
                    f=arr[i]+arr[j];
                    printf("%d ",f);

            }




    }


   return 0;
}
