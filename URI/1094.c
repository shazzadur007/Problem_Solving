#include<stdio.h>

int main()
{
    int i,N,x,count=0,Coelho=0,Rato=0,Sapo=0;
    float Z,W,Y;
    char ch;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %c",&x,&ch);
        if(x>=1&&x<=15||ch=='C'||ch=='R'||ch=='S')
        {
            count=count+x;
            if(ch=='C')
            {
                Coelho=Coelho+x;

            }
            if(ch=='R')
            {
                Rato=Rato+x;
            }
            if(ch=='S')
            {
                Sapo=Sapo+x;
            }

        }

    }
    Z=(Coelho*100.00)/count;
    W=(Rato*100.00)/count;
    Y=(Sapo*100.00)/count;
    printf("Total: %d cobaias\n",count);
    printf("Total de coelhos: %d\n",Coelho);
    printf("Total de ratos: %d\n",Rato);
    printf("Total de sapos: %d\n",Sapo);
    printf("Percentual de coelhos: %0.2f %%\n",Z);
    printf("Percentual de ratos: %0.2f %%\n",W);
    printf("Percentual de sapos: %0.2f %%\n",Y);

    return 0;

}
