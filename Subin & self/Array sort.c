#include<stdio.h>


int main ()
{
    int n,i,j,tmp ;
    int x[100];

    printf("Input the size of array: ");
    scanf("%d",&n);

    printf("Input value to the Array:\n");
    for(i=0; i<n;i++){
        printf("element - %d: ",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[j]<x[i]){
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    printf("Elements of array in sorted: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n\n");


}
