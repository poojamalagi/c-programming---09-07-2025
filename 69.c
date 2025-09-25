#include<stdio.h>
int main()
{
    int n,i,j,t,arr[100];

    printf("enter the size");
    scanf("%d",&n);

    printf("enter the %d of the number",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\n before sorting");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }


    }

    printf("\nafter sorting");
     for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
