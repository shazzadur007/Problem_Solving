#include <stdio.h>

int main()
{
    int i,j,a,b,x,sum=0;

    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
        {
            for(j=a+1,sum=0;j<b;j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        else if(a>b)
        {
            for(j=b+1,sum=0;j<a;j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);

        }
        else
        {
            sum=0;
            printf("%d\n",sum);
        }
    }
    return 0;

}
