#include <stdio.h>

int main()
{
    int i,a,b,tmp,sum;

    while((scanf("%d %d",&a,&b)&&(a>0&&b>0)))
    {
        if(a>b)
        {
            tmp=b;
            b=a;
            a=tmp;
            for(i=a,sum=0; i<=b;i++)
            {
                sum=i+sum;
                printf("%d ",i);

            }
            printf("Sum=%d\n",sum);
        }else
        {
           for(i=a,sum=0; i<=b;i++)
            {
                sum=i+sum;
                printf("%d ",i);

            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;




}
