/*Find the largest of two numbers*/
#include<stdio.h>
int main()
{
    int a,b;

    printf("enter two numbers;");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("\n%d is the largest number:",a);
    }

    else if (b>a)
    {
        printf("\n%d is largest number:",b);
    }
    else
    {
        printf("\n%d and %d are equal",a,b);
    }


}
