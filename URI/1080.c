#include <stdio.h>

int main()
{
    int i,x,max=-1,p;

    for(i=1;i<=100;i++)
    {
        scanf("%d",&x);
        if(max<x)
        {
            max=x;
            p=i;
        }
    }
     printf("%d\n%d\n", max, p);
     return 0;

}
