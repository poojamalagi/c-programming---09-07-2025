/*Menu-driven Calculator*/
#include<stdio.h>
int main()
{
    int a,b,choice;
    float total;

   menu:printf("\nenter two value");
    scanf("%d%d",&a,&b);


    printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit \nchoose the option");
    scanf("%d",&choice);

    switch(choice)
    {

        case 1:
            total=a+b;
            printf("%f",total);
            break;

        case 2:
            total=a-b;
            printf("%f",total);
            break;

        case 3:
            total=a*b;
            printf("%f",total);
            break;

        case 4:
            total=(float)a/b;
            printf("%f",total);
            break;

        case 5:
             printf("%d exit",choice);
             return 0;

        default:
            printf("\ninvliad",choice);
    }
        goto menu;




}
