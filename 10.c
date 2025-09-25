/*WAP find two integer and swap it wihout using third varoable and arthmatic */
#include<stdio.h>
 int main()
{
    int a,b;

    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);

    printf("\nBefore the swapping value a=%d,b=%d",a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("\nAfter the swapping value a=%d,b=%d",a,b);
}
