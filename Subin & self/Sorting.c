#include<stdio.h>
int find_max(int ara[],int n);
int find_min(int ara[],int n);
void sorted(int ara[],int n);


int main()
{
    int n,i,j,tmp;
    int ara[100];
//  ={-100,0,53,22,83,23,89,-132,201,3,85};
    printf("Enter Array size:");
    scanf("%d",&n);
    printf("Enter value to the array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d index value: ",i);
        scanf("%d",&ara[i]);
    }

    int max=find_max(ara,n);
    int min=find_min(ara,n);
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d\n",min);

//////ascending order sorting
    sorted(ara,n);

    return 0;

}

int find_max(int ara[],int n)
{
    int max=ara[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    return max;
}

int find_min(int ara[],int n)
{
    int min=ara[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(ara[i]<min)
        {
            min=ara[i];
        }
    }
    return min;
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
    printf("Elements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", ara[i]);
    }
    printf("\n\n");
}
