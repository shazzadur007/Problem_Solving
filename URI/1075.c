#include <stdio.h>

int main()
{
    int i,x;
    scanf("%d",&x);
    for(i=1;i<10000;i++)
    {
        if(i%x==3){
            printf("%d\n",i);
        }
    }
    return 0;

}
