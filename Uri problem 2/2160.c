#include<stdio.h>
int main()
{
    int a,s=0,d,f;
    char arr[550];
    gets(arr);
    s=strlen(arr);
    if(s<=80)
    {
        printf("YES\n");
    }
    else
    {
         printf("NO\n");
    }

    return  0;

}
