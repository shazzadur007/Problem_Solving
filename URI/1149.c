#include<stdio.h>

int main()
{
    int i, x,y,j=0;
    scanf("%d %d",&x,&y);
    while(y==0||y<0)
    {
        scanf("%d",&y);
    }
    for(i=0;i<y;i++)
    {
        j=j+x+i;
    }
    printf("%d\n",j);

}
