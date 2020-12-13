#include<stdio.h>

int main()
{
    int i,x,y,in=0,out=0;
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        scanf("%d",&y);
        if(y>=10&&y<=20){
            in++;
        }
        else
        {
            out++;
        }
    }


    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
