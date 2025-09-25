/*Check Even or Odd*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);


    if(a%2==0)
    goto even;

    goto odd;
    even:printf("%d is even",a);
    return 0;


    odd:printf("%d is odd",a);
    return 0;

}
