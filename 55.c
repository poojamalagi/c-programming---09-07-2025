//#ncr=n!(n-r)!r!
#include<stdio.h>
int main()
{
    int n,r,b,sum1=1,sum2=1,sum3=1;
    float ncr;

    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);

    for(b=n;b>=1;b--)
    {
        sum1*=b;
    }
    for(b=n-r;b>=1;b--)
    {
        sum2*=b;
    }

    for(b=r;b>=1;b--)
    {
        sum3*=b;
    }
   ncr=sum1/(sum2*sum3);
    printf("ncr=%f",ncr);
}




