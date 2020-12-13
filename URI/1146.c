#include<stdio.h>

int main()
{
    int i,x,y=1;

    while(1)
    {
        scanf("%d",&x);
        if(x!=0)
        {
            printf("%d",y);
            for(i=2;i<=x;i++)
            {
                printf(" %d",i);

            }
            printf("\n");
        }
        else
        {
            break;
        }
    }
}
