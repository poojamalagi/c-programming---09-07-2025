/*WAP to read electricity units consumed*/

#include<stdio.h>
int main()
{
    int a;
    float total;

    printf("Enter the units consumed: ");
    scanf("%d",&a);

    if(a>=1&&a<= 35)
    {
        total=(a*1.5);
        printf("total Amount=%f",total);
    }
    else if (a>=36&&a<=80)
    {
        total=(35*1.5)+(a-35)*2.5;
         printf("total Amount=%f",total);
    }

    else if (a>=81&&a<=120)
    {
        total=(35*1.5)+(45*2.5)+(a-80)*4;
        printf("total Amount=%f",total);
    }
    else
    {
        total=(35*1.5)+(45*2.5)+(40*4)+(a-120)*5.5;
        printf("total Amount=%f",total);
    }



}
