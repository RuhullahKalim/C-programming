#include<stdio.h>
void  greedy(int value);
int main()
{
    int a,s;
    scanf("%d",&a);
    greedy(a);

    return 0;
}

void greedy(int value)
{
    int a,s=0,d,j;
    int arr[7]= {1000,500,100,50,10,5,1};
    int len=7;
    while(s<len)
    {
        if(arr[s]<=value)
        {
            d=value/arr[s];
            if(value==999)
            {
                printf("CMXCIX");
                break ;
            }
            if(arr[s]==1000)
            {
                for(j=0; j<d; j++)
                {
                    printf("M");
                }
            }
            if(arr[s]==500)
            {
                for(j=0; j<d; j++)
                {
                    printf("D");
                }
            }
            if(arr[s]==100)
            {
                for(j=0; j<d; j++)
                {
                    printf("C");
                }
            }
            if(arr[s]==50)
            {
                for(j=0; j<d; j++)
                {
                    printf("L");
                }
            }
            if(arr[s]==10)
            {
                for(j=0; j<d; j++)
                {
                    printf("X");
                }
            }
            if(arr[s]==5)
            {
                for(j=0; j<d; j++)
                {
                    printf("V");
                }
            }
            if(arr[s]==1)
            {
                for(j=0; j<d; j++)
                {
                    printf("I");
                }
            }

            value=value-(d*arr[s]);
        }
        s++;
    }
    printf("\n");

}
