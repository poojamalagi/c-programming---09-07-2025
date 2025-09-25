/* armstrong or not */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,n,x,sum=0;
    printf("enter the number");
    scanf("%d",&a);

    x=a;
    while(a!=0)
    {
        r=a%10;
        n=pow(r,3);
        sum+=n;
        a=a/10;
    }

    printf("\nsum=%d",sum);
    if(sum==x)
     printf("\n%d is armstrong",sum);
    else
    printf("\n%d is not armstrong",sum);

}
