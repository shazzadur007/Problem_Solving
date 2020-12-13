#include <stdio.h>

int main()
{
    int i,j,a,c=1,d=4;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {

        for(j=c;j<=d;j++)
        {
            if(j%4==0)
                printf("PUM\n");
            else
                printf ("%d ",j);
        }
        c+=4;
        d+=4;
    }
    return 0;
}
