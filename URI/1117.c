#include<stdio.h>

int main ()
{
    int i,count=0;
    float x,sum=0;
    do
    {
        scanf("%f",&x);
        if(x>=0.0&&x<=10.0)
        {
            count++;
            sum+=x;
        }
        else
        {
            printf("nota invalida\n");
        }
    }while(count<2);
    printf("media = %0.2f\n",sum/2);



    return 0;
}
