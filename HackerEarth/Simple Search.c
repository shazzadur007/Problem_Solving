#include<stdio.h>

int main()
{
    int i,a[100],n,k,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            p=i;
        }
    }
    printf("%d\n",p);

}


