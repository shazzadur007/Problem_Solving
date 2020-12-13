#include<stdio.h>

int main()
{
    int i,j,x,y,m=1,p,l;
    scanf("%d %d",&x,&y);
    p=y/x;
    l=x;

    for(i=1;i<=p;i++)
    {
        printf("%d",m);
        for(j=m+1;j<=l;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        m=m+x;
        l=l+x;

    }
    return 0;

}
