/*Write a program to input time in 24-hour format and display it in AM/PM format*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        case 2:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            printf("%d AM",a);
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
            printf("%d PM",a);
            break;
        default:
            printf("%d is invaild hour",a);

    }
}
