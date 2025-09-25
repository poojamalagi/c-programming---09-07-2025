#include<stdio.h>
int main()
{
    int n,i,a=2,b=2;
    float c;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {


        c=1/a+1/b;
        a=b;
        b=c;

        printf("\nc=%f",c);

    }

    printf("\n\nsum=%f",c);
}
