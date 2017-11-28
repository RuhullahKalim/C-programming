#include<stdio.h>
#include<string.h>
int main()
{
    int a,s=0,d,g,i,j;
    char arr[100000];
    scanf("%d",&a);
    //getchar();
    //gets(arr);
    scanf("%s",arr);
    s=strlen(arr);
    for(i=0;i<s;i++)
    {

        if(arr[i]!=a || arr[i]!='0')
        {
            printf("%c",arr[i]);
        }
    }
    printf("\n");




    return 0;
}
