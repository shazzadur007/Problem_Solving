#include<stdio.h>

int main ()
{
    int X,l,j,i;
    float n,a,ar[2],avg;
    while(1)
    {
        j=0;
        for(i=0;i<=50;i++)
        {
            scanf("%f",&n);
            if(n>=0&&n<=10)
            {
                ar[j]=n;
                j++;
            }
            else
            {
                printf("nota invalida\n");
            }
            if(j==2)
            {
                avg=(ar[0]+ar[1])/2;
                printf("media = %.2f\n",avg);
                break;
            }
        }
        for(l=0;l<=50;l++)
        {
            scanf("%d",&X);
            printf("novo calculo (1-sim 2-nao)\n");
            if(X==1||X==2)break;

        }
        if(X==1) continue;
        else if(X==2) break;

    }
    return 0;

}


//    int i,y,count=0;
//    float x,sum=0;
//    do
//    {
//        scanf("%f",&x);
//        if(x>=0.0&&x<=10.0)
//        {
//            count++;
//            sum+=x;
//        }
//        else
//        {
//            printf("nota invalida\n");
//        }
//    }while(count<2);
//    printf("media = %0.2f\n",sum/2);
//    while(1)
//    {
//        scanf("%d",&y);
//        if(y<1||y>2)
//        {
//            printf("novo calculo (1-sim 2-nao)\n");
//            continue;
//
//        }
//        if(y==2)
//        {
//            break;
//        }
//
//        if(y==1)
//        {
//            do
//            {
//                x=0,sum=0;
//                scanf("%f",&x);
//                if(x>=0.0&&x<=10.0)
//                {
//                    count++;
//                    sum+=x;
//                }
//                else
//                {
//                    printf("nota invalida\n");
//                }
//            }while(count<2);
//
//        }
//
//    }
//    printf("media = %0.2f\n",sum/2);
//    return 0;


