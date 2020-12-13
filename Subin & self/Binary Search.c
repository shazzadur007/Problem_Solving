#include<stdio.h>
void sorted(int ara[],int n);

int main()
{
    int ara[100];
    int low_indx=0;
    int high_indx=15;
    int mid_indx;
    int i,n,num;
    printf("Please input the Array Size: ");
    scanf("%d",&n);
    printf("Inset the array value:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    printf("\nInput: ");
    for(i=0;i<n;i++){
        printf("%d ",ara[i]);
    }
    sorted(ara,n);

    printf("Input for check: ");
    scanf("%d",&num);




    while(low_indx<=high_indx){
        mid_indx=(low_indx+high_indx)/2;
        if(num== ara[mid_indx]){
            break;
        }
        if(num<ara[mid_indx]){
            high_indx=mid_indx-1;
        }
        else{
            low_indx=mid_indx+1;
        }
    }
    if(low_indx>high_indx){
        printf("%d is not in the array\n",num);

    }
    else{
        printf("%d is found in the array. It is the %d th element of the array.\n",ara[mid_indx],mid_indx+1);
    }
    return 0;
}
void sorted(int ara[],int n)
{
    int i,j,tmp;
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ara[j]<ara[i]){
                tmp = ara[i];
                ara[i] = ara[j];
                ara[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:");
    for(i=0; i<n; i++)
    {
        printf("%d  ", ara[i]);
    }
    printf("\n");
}

