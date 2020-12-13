#include<stdio.h>

int main ()
{
    int i, x,a,b;
    double z;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d %d",&a,&b);
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            z=(double)a/b;
            printf("%0.1lf\n",z);
        }

    }

    return 0;
}

