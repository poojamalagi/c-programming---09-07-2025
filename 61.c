#include<stdio.h>
int main()
{
    int a,fact=1,n;

    printf("enter the number");
    scanf("%d",&a);

    n=a;

    while(a>=1)
    {
        fact*=a;
        a--;
    }
    printf("factorial of %d=%d",n,fact);
}
