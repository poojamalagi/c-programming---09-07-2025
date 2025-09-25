#include<stdio.h>
int main()
{
    int a,sum;
    sum=0;
    a=1;

    while (a<=10)
    {
        sum+=a;
        a++;
    }
    printf("total sum=%d",sum);
}
