//Read and Print Array //
#include<stdio.h>
int main()
{
    int arr[5],i,n;

    printf("enter the size of number=");
    scanf("%d",&n);

    printf("\nenter %d number=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n number");
    for(i=0;i<n;i++)
        printf("\n%d",arr[i]);
}
