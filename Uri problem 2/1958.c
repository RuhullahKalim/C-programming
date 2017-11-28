#include<stdio.h>
int main()
{
    int a=0,s=0,d=0,f=0,g,h,j,k=1,i;
    char arr[1000];
    scanf("%s",&arr);
    a=strlen(arr);

    if(arr[0]=='-' && arr[2]=='.')
    {
        if(arr[7]>='5')
        {
            arr[6]=arr[6]+k;
            printf("%.7sE+00",arr);
            //break;

        }
        else
        {
            printf("%.7sE+00",arr);
            //break;
        }
    }
    else   if(arr[1]=='.')
    {
        if(arr>0)
        {
            if(arr[6]>='5')
            {
                arr[5]=arr[5]+k;
                printf("+%.6sE+00",arr);
                //break;

            }
            else
            {
                printf("+%.6sE+00",arr);
               // break;
            }
        }
     }
     else
     {
        if(arr>0)
        {
            h=a-1;
            printf("+%.5sE+%d\n",arr,h);
        }

     }





    return 0;

}
