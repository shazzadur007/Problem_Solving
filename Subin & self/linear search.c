#include<stdio.h>
int linear_search(int array[],int size,int n)
{
    for(int i=0; i<size;i++)
    {

        if (array[i] == n)
            return i;
    }
    return -1;
}

int main()
{
    int n,x,array[]={13,24,56,76};
    int size= sizeof(array)/sizeof(array[0]);

    printf("Enter number: ");
    scanf("%d",&n);
    int result=linear_search(array,size,n);
    if(result==-1)
    {
        printf("Number Not found\n");
    }
    else
    {
        printf("Number found index in %d\n",result);
    }

    return 0;


}
