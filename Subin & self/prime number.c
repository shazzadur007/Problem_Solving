#include <stdio.h>

int main()
{
    int i, j, d,count=0;

    printf("Enter the number ");
    scanf("%d",&d);

    for(i=1;i<=d;i++)
    {
        if(d%i==0)
        {
            count=count+1;
        }

    }
    if(count==2)
    {
        printf("%d is a prime number.\n",d);
    }
    else
    {
        printf("%d is not a prime number.\n",d);
    }
    return 0;
}
