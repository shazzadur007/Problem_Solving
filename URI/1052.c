#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    scanf("%d",&x);
    char month[12][30]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(x>0&&x<=12){
        printf("%s\n",month[x-1]);
    }
    return 0;


}
