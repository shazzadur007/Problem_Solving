#include<stdio.h>

int main()
{
    int i,N,a=1,b=1,c,j=0;
    scanf("%d",&N);
    if(N<46)
    {
        printf("%d",j);
        for(i=1;i<N;i++)
        {

            printf(" %d",a);
            c=a+b;
            a=b;
            b=c;

        }
        printf("\n");
    }
    return 0;
}
