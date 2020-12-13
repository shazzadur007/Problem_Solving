#include <stdio.h>

#include <math.h>

int main()
{
    int i,z;
    scanf("%d",&z);
    if(z>5&&z<2000){
        for(i=1;i<=z;i++){
        if(i%2==0){
            int y=pow(i,2);
            printf("%d^2 = %d\n",i,y);
        }

    }
    }


}

