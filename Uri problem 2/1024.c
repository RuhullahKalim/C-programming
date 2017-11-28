#include<stdio.h>
#include<string.h>
int main()
{
    int a,s=0,d,i,q=0,w,e,j,p;
    char arr[1001],arr1[1001];
    scanf("%d",&a);
    getchar();
    for(p=0;p<a;p++)
    {
        gets(arr);
        s=strlen(arr);
        for(i=0; i<s; i++)
        {
            if(arr[i]>='A' && arr[i]<='Z' || arr[i]>='a' && arr[i]<='z')
            {
                arr[i]=arr[i]+3;
            }
        }
        e=s-1;

        for(i=0; i<s; i++)
        {
            arr1[i]=arr[e];
            e--;

        }
        arr1[i]='\0';
        q=s/2;

        for(j=q; j<s; j++)
        {
            arr1[j]=arr1[j]-1;
        }
        printf("%s\n",arr1);

    }




    return 0;
}
