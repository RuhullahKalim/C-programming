#include<stdio.h>
int main()
{
    int a,s,d,i,g=1,h,j,len,len2,count=0;
    char arr[100],arry[1000];

    while(scanf("%s",&arr)!=EOF)
    {
        scanf("%s",&arry);
        len=strlen(arr);
        len2=strlen(arry);

        for(i=0; i<len; i++)
        {
            if(a==arr)
            {
                count++;
            }
        }

        if(count==0)
        {
            printf("Caso #%d:\n",g);
            g++;
            printf("Nao existe subsequencia\n");

        }
        else
        {
            printf("Caso #%d:\n",g);
            g++;
            printf("Qtd.Subsequencias: %d\n",count);
        }

    }

    return 0;
}
