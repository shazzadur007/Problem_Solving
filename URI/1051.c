#include <stdio.h>

int main()
{
    double x,tx;
    scanf("%lf",&x);

    if(x>=0.00&&x<=2000.00){
        printf("Isento\n");
    }
    else if(x>=2000.01&&x<=3000.00){
        x-=2000.00;
        printf("R$ %0.2lf\n",x*.08);
    }
    else if(x>=3000.01&&x<=4500.00){
        x-=3000;
        tx=(x*.18)+(1000*.08);
        printf("R$ %0.2lf\n",tx);
    }
    else if(x>4500.00){
        x-=4500;
        tx=(x*.28)+(1500*.18)+(1000*.08);
        printf("R$ %0.2lf\n",tx);
    }
}
