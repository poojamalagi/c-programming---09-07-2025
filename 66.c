#include<stdio.h>
int main()
{
    int i,arr[100],n,largest=0, secondlargest=0;

    printf("enter the size:");
    scanf("%d",&n);

    printf("\n enter the %d number=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    printf("\nFirst largest=%d",largest);



    for(i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            if(arr[i]>secondlargest)
            secondlargest=arr[i];
        }
    }
    printf("\nSecond largest=%d",secondlargest);
}

