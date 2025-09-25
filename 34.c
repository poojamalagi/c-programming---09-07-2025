/*WAP to find area of equ,triangle */
#include<stdio.h>
#define CON 0.437
int main()
{
    int a;
    float area;
    printf("please enter the value of a:");
    scanf("%d",&a);
    area=CON*(float)a*a;
    printf("area=%f",area);
}
