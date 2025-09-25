#include<stdio.h>
int main()
{
    int i,arr[100],n,a,smallest;

    printf("enter the size:");
    scanf("%d",&n);

    printf("\n enter the %d number=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a=arr[i];
    }
    smallest=a;
    for(i=0;i<n;i++)
    {
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    printf("smallest=%d",smallest);

}
