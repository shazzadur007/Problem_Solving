#include<stdio.h>
int binary_search(int array[],int n,int x );
int ascending_sort(int array[],int n);
int main()
{
    int i,j,x,n,left,right,mid;
    printf("Enter the array size: ");
    scanf("%d",&n);

    int array[n];

    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Element in sorted: ");
    ascending_sort(array,n);

    printf("Enter your number: ");
    scanf("%d",&x);
    binary_search(array,n,x);
    return 0;
}
int binary_search(int array[],int n,int x )
{
    int left,right,mid;

    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(array[mid]==x)
        {
            break;
        }
        if(array[mid]<x)
        {
            left=mid+1;
        }
       else
       {
           right=mid-1;
        }
    }
    if(left>right)
    {
        printf("%d is not in the array.\n",x);
    }
    else
    {
        printf("%d is in the array. The position is %d.\n",x,mid);
    }
}

int ascending_sort(int array[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(array[j]<array[i])
           {
               temp=array[j];
               array[j]=array[i];
               array[i]=temp;
           }
        }
        printf("%d  ", array[i]);
    }
    printf("\n");
}

