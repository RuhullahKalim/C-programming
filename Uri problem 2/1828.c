#include<stdio.h>
#include<string.h>
int main()
{
    int a,s,d,i=1;
    char arr[100];
    scanf("%d",&a);
    while(a--)
    {
        gets(arr);

        if(arr[0]=='l')
        {
            printf("Caso #%d: Raj trapaceou!\n",i);
        }

        else if(arr[0]=='t')
        {
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(arr[0]=='p')
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if(arr[0]=='S')
        {
            printf("Caso #%d: De novo!\n",i);
        }
        else
        {
            printf("Hello\n");
        }

        i++;

    }



    return 0;
}

