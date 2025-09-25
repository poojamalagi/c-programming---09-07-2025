/* WAP prit to largest number */
#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("enter the value of four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b&&a>c&&a>d)
    {
        printf("%d is largest number",a);
    }
    else if(b>a&&b>c&&b>d)
    {
       printf("%d is largest number",b);
    }
    else if (c>a&&c>b&&c>d)
    {
        printf("%d is largest number",c);
    }

    else
    {
        printf("%d is largest number",d);
    }

}
