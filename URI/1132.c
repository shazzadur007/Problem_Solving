#include <stdio.h>

int main()
{
    int i, a,b, count=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        for(i=b;i<=a;i++)
        {
            if(i%13!=0)
            {
                count+=i;
            }
        }
        printf("%d\n",count);
    }
    else if (b>a)
    {
        for(i=a;i<=b;i++)
        {
            if(i%13!=0)
            {
                count+=i;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
