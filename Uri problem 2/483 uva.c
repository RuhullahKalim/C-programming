#include<stdio.h>
#include<string.h>
int main()
{

    char arr[1000];
    int len,i,j,k;

    while(gets(arr))
    {
         len=strlen(arr);
         for(i=0;i<len;i++)
         {

             k=k+1;
             if(arr[i]==' ')
             {
                 for(j=len-1;j>=0;j--)
                 {
                     printf("%c",arr[j]);
                 }
             }
         }
         printf("\n");
    }




    return 0;
}
