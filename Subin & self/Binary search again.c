#include<stdio.h>


int main()
{

    int array[]={12,16,19,22,24,26,29,34,38,42};
    int n,x,i,left,right,mid;
    n=sizeof(array)/sizeof(array[0]);
    left=0;
    right=n-1;
    printf("Enter the number\n");
    scanf("%d",&x);
    for(i=0;left<=right;i++)
    {
        mid=(left+right)/2;
        if(array[mid]==x)
        {
            printf("%d found in the array where index number is %d",x,mid);
        }
        else
        {
            printf("%d not found in the array\n",x);
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

}


//int binary_search(int A[],int n,int x)
//{
//    int left,right,mid;
//    left=0;
//    right=n-1;
//    while(left<=right)
//    {
//        mid=(left+right)/2;
//        if(A[mid]==x)
//        {
//            return mid;
//        }
//        if(A[mid]<x)
//        {
//            left=mid+1;
//        }
//        else{
//            right=mid-1;
//        }
//    }
//    return -1;
//}
#include<stdio.h>

int main()
{
    int i,j,left,right;
    int array[]={10,25,69,85,89};
    left=0;
    right=

}
