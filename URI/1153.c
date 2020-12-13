#include<stdio.h>

int main()
{
    int i,N,j=1;
    scanf("%d",&N);
    for(i=N;i>0;i--)
    {
        j=j*i;
    }
    printf("%d\n",j);
    return 0;
}

