/*Read a number and check if it is positive or negative */
#include<stdio.h>

int main()
{
    int a;


    printf("enter the value of a:");
    scanf("%d",&a);

   (a%2==0)?printf("\n%d is even",a):printf("\n%d is odd",a);

}
