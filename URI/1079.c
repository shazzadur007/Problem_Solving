#include <stdio.h>

int main()
{
    int i,x;
    float a,b,c,avg;
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        avg=((a*2)+(b*3)+(c*5))/10;
        printf("%0.1f\n",avg);
    }
    return 0;
}


