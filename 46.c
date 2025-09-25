#include<stdio.h>
int main()
{
    int n,fibo,a,b,c;

    printf("enter the value of n=");
    scanf("%d",&n);

    b=0;
    c=1;

    for(a=1;a<=n;a++)
    {
       printf("%d",b);
       fibo=b+c;
       b=c;
       c=fibo;

    }
}
