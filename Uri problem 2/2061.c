#include<stdio.h>
 int main()
 {
     int a,s,d,f,g=0,i,count;
     char arr[100];
     scanf("%d %d",&a,&s);
     count = a;
     for(i=1;i<=s;i++)
     {
         scanf("%s",&arr);
         if(arr[0]=='f')
         {
             count ++;

         }
        else
            count --;

     }

     printf("%d\n",count);


     return 0;
 }
