#include <stdio.h>

int main ()

{
    int i,j,x,z,count;

    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        scanf("%d",&z);
        for(j=1,count=0;j<z;j++)
        {
            if(z%j==0)
            {
                count=count+j;
            }


        }
        if(count==1)
        {
            printf("%d eh primo\n",z);

        }
        else
        {
            printf("%d nao eh primo\n",z);
        }

    }
    return 0;
}



