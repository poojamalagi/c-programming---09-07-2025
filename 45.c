#include<stdio.h>
int main()
{
    int n,i,count,a=0,b=1,c;

    printf("enter the value of n=");
    scanf("%d",&n);

    for(count=1;count<=n;count++)
    {
        printf("%d",a);
        c=a+b;//0+1=1||1+1=2   @@1+2=3    !!2+3=5
        a=b;//a=1,b=1||a=1,b1  @@a=2,b2   !!a=3,b=3
        b=c;//b=1,c=1||b=2,c=2 @@b=3,c=3   !!b=5,c=5
    }
}
