
// principle diagonal matrix//
#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10];

    printf("enter the row and cols");
    scanf("%d%d",&m,&n);

    if(m==n)
    {
        printf("enter the %d*%d number",m,n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
               scanf("%d",&a[i][j]);
            }

        }
        printf("\n matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              printf("%d ",a[i][j]);
            }
            printf("\n");
        }
         printf("\n principal diagonal\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
               if(i==j)
                printf("%d ",a[i][j]);
            }

            printf("\n");

        }

    }
    else
        printf("Matrix is not square, cannot find principal diagonal.\n");
}
