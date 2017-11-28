#include<stdio.h>
int main()
{

    int a,s,d,f,g,h;
    scanf("%d",&a);

    while(a--)
    {
        scanf("%d%d%d",&s,&d,&f);
        if(10<=s && d<10)
        {
            printf("%d:0%d ",s,d);
            if(f==1)
            {
                printf("- A porta abriu!\n");
            }
            else
            {
                printf("- A porta fechou!\n");
            }

        }

    else if(10>s && d>=10)
        {
            printf("0%d:%d ",s,d);
            if(f==1)
            {
                printf("- A porta abriu!\n");
            }
            else
            {
                printf("- A porta fechou!\n");
            }

        }

        else if(10>s && d<10)
        {
            printf("0%d:0%d ",s,d);
            if(f==1)
            {
                printf("- A porta abriu!\n");
            }
            else
            {
                printf("- A porta fechou!\n");
            }

        }

        else
        {
            printf("%d:%d ",s,d);
            if(f==1)
            {
                printf("- A porta abriu!\n");
            }
            else
            {
                printf("- A porta fechou!\n");
            }

        }

    }

    return 0;
}
