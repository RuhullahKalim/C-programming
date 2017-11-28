#include<stdio.h>
int main()

{
    int a,s,d,f,i,h=0,arr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d%d",&a,&s)!=EOF)
    {
      if(a==12 && s==24)
      {
          printf("E vespera de natal!\n");
      }
      else if(a==12 && s==25)
      {
          printf("E natal!\n");
      }
      else if(a==12 && 25<s)
      {
          printf("Ja passou!\n");
      }
      else
      {
          h = arr[a-1] - s;
            for(i = a; i < 12; i++)
            {
                  h+= arr[i];
            }

            printf("Faltam %d dias para o natal!\n", h-6);
      }

    }



    return 0;
}
