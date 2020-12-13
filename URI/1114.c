#include <stdio.h>

int main()
{
    int b,a=2002;
    do
    {
        scanf("%d",&b);
        if(b==a)
        {
            printf("Acesso Permitido\n");
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }while(b!=a);
    return 0;
}



