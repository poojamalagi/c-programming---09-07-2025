/* buddle sorting */

 #include<stdio.h>
 int main()
 {
     int i,arr[100],n,j,t;

     printf("enter the size of numbers=");
     scanf("%d",&n);

     printf("\nenter the %d number",n);
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

        printf("before sorting");
        for(i=0;i<n;i++)
            printf("\n %d ",arr[i]);

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

        printf("\n after sorting;");
        for(i=0;i<n;i++)
            printf("\n %d ",arr[i]);

 }

