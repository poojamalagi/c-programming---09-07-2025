/*Write a program to input an angle and check whether it forms an acute, obtuse, or right angle */
#include<stdio.h>
int main()
{
    int angle;
    printf("enter the angle;");
    scanf("%d",&angle);

    if(angle<90)
    printf("%d is Acute Angle",angle);

    else if(angle>90 && angle<180)
    printf("%d is obtuse Angle",angle);

    else if(angle==90)
    printf("%d is right Angle",angle);

    else
    printf("%d is invaild",angle);
}
