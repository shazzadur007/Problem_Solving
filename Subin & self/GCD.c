#include<stdio.h>

int main()
{
    int a,b, t,x,gcd;
    scanf("%d %d",&a,&b);
    if(a==0){
        gcd=b;
    }else if(b==0){
        gcd=a;
    }
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;

    }
    printf("GCD is %d\n",gcd);
    return 0;
}

////////////////
//    int a,b,x,t,gcd;
//    scanf("%d %d",&a,&b);
//    if(a<b){
//        x=a;
//    }
//    else
//    {
//        x=b;
//    }
//    for(;x>=1;x--)
//    {
//        if(a%x==0&& b%x==0)
//        {
//            gcd=x;
//            break;
//        }
//    }
//    printf("GCD is %d\n",gcd);
//    return 0;

