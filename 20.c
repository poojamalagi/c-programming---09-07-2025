/*Display grade based on marks */
#include<stdio.h>
int main()

{
    int marks;

    printf("enter the marks:");
    scanf("%d",&marks);

    if (marks>=90&&marks<=100)
    {
        printf("%d=A+",marks);
    }

    else if (marks>=80&&marks<=89)
    {
       printf("%d=B",marks);
    }

    else if (marks>=20&&marks<=60)
    {
        printf("%d=C",marks);
    }

    else
    {
        printf("%d=fail",marks);
    }
}
