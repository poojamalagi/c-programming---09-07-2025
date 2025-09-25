#include <stdio.h>
int main()
{
    int a,b,choice;
    float total;
    printf("enter the value:");
    scanf("%d%d",&a,&b);

    printf("\n1.add\n2.sub\n3.multi\n4.divi\n");
    printf("\nchoose the choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            total=a+b;
            printf("total=%f",total);
            break;
        case 2:
            total=a-b;
            printf("total=%f",total);
            break;
        case 3:
            total=a*b;
            printf("total=%f",total);
            break;
        case 4:
            total=(float)a/b;
            printf("total=%f",total);
            break;
        default:
            printf("%d is invalud");

    }



}

