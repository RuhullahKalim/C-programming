#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,a,s,d;
    char arr[550];
    gets(arr);
    count=strlen(arr);
    if(140<count)
    {
        printf("MUTE\n");
    }
    else
    {
       printf("TWEET\n");
    }



    return 0;
}
