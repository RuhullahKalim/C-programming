#include<stdio.h>
#include<string.h>
int main()
{
    int s=0,g,i,j,k,d,p=1;
    char arr[100000],a;
    while(1)
    {
        scanf("%c",&a);
        scanf("%s",arr);

        if(a=='0')
        {
            break;
        }
        s=strlen(arr);
        g=0;
        d=1;
        for(i=0; i<s; i++)
        {
            if(arr[i]=='0' && g==2)
            {
                printf ( "%c", arr[i] );
            }
            if (arr[i] != '0'&& arr[i] != a)// && N!='0'
            {
                printf ( "%c", arr[i] );
                d= 0;
                g = 2;
            }


        }
        if(a!='0' && d==1)
        {
            printf("0");
        }
        printf("\n");
        //puts ( "" );
        getchar();

    }

    return 0;
}

