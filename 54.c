#include<stdio.h>
int main()
{
    int i,j,n,b;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
         b=i-1;
        for(n=b;n>=1;n--)
        {
             //n--;
            printf("%d",n);
        }
        printf("\n");
    }
}
