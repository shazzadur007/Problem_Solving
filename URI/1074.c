#include<stdio.h>

int main()
{
    int i,x,y;
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        scanf("%d",&y);
        if(y>0)
        {
            if(y%2==0)
            {
               printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if(y==0)
        {
            printf("NULL\n");
        }
        else
        {
             if(y%2==0)
            {
               printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }

    }
}
