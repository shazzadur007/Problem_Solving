#include<stdio.h>

int main()
{
    float i,j;
    int a,b;
    for(i=0.0;i<2.1;i+=0.2)
    {
        for(j=1.0;j<=3.0;j++)
        {
            if(i>0 && i<1 || i>1 && i<2){
                printf("I=%0.1f J=%0.1f\n",i,i+j);
            }
            else
            {
                a=i;
                b=i+j;
                printf("I=%d J=%d\n",a,b);

            }

        }
    }
    return 0;
}
//
//for(i=0;i<10;i++)
//    {
//        if(I<=0)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("I=%d J=%d\n",(int)I,(int)J);
//                J+=1;
//            }
//            J=1.0;
//        }
//        I+=0.2;
//        if(I>0)
//        {
//            J+=interval;
//            for(j=0;j<3;j++)
//            {
//                printf("I=%0.1f J=%0.1f\n",I,J);
//                J+=1;
//            }
//            interval+=0.2;
//        }
//    }
