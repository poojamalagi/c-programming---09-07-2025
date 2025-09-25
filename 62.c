#include<stdio.h>
int main()
{
    int a,sum=0,n;

    printf("enter the value a:");
    scanf("%d",&a);

    n=1;
    while(n<a)
    {
        if(a%n==0)
        {
            sum+=n;

        }

        n++;
    }
            if(sum==a)
                printf("\n%d is the perfect number",a);
            else
                printf("\n%d is not perfect number",a);


}
