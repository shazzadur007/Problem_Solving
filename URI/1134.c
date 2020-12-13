#include <stdio.h>

int main()
{
    int x,a=0,g=0,d=0;

    while(1)
    {
        scanf("%d",&x);
        if(x==4)
        {
            break;
        }
        else{
            if(x==1)
            {
                a=a+1;
            }
            else if(x==2)
            {
                g=g+1;

            }
            else if(x==3)
            {
                d=d+1;

            }
            else{
                continue;
            }
        }
    };
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;

}
