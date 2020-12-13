#include<stdio.h>

int main()
{
    int i,x,z,j=0,sum=0;
    scanf("%d %d",&x,&z);
    while(z<x||z==x)
    {
        scanf("%d",&z);
    }
    for(i=x;i<=z;i++)
    {
        j++;
        sum=sum+i;
        if(sum==z||sum>z)
        {
            break;
        }
    }
    printf("%d\n",j);
    return 0;
}
