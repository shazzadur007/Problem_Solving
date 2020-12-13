#include <stdio.h>

int main()
{
    double sl,r,fi_sl;
    scanf("%lf",&sl);

    if(sl>=0&&sl<=400.00){
        r=sl*0.15;
        fi_sl=sl+r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",fi_sl,r);
    }
    else if(sl>=400.01&&sl<=800.00){
        r=sl*0.12;
        fi_sl=sl+r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",fi_sl,r);
    }
    else if(sl>=800.01&&sl<=1200.00){
        r=sl*0.10;
        fi_sl=sl+r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",fi_sl,r);
    }
    else if(sl>=1200.01&&sl<=2000.00){
        r=sl*0.07;
        fi_sl=sl+r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",fi_sl,r);
    }
    else if(sl>2000.00){
        r=sl*0.04;
        fi_sl=sl+r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",fi_sl,r);
    }
    return 0;
}
