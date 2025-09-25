/*digit value*/
#include<stdio.h>
int main()
{
    int a,sum,rev,r;
    sum=0;
    printf("enter the value");
    scanf("%d",&a);

    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
        sum+=r;
    }
    printf("total sum=%d",sum);
}
