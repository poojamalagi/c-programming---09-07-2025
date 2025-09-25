/* Check if three angles form a triangle */
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter the three angle:");
    scanf("%d%d%d",&a,&b,&c);


    sum= a+b+c;
    if(a>0&&b>0&&c>0&&sum==180)
    printf("sum=%d is valid triangle",sum);

    else
    printf("sum=%d is not valid triangle",sum);

}

