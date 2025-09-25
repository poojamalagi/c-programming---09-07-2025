/*nput an integer and print whether it’s positive, negative, or zero using the conditional operator */
#include<stdio.h>
int main()
{
    int a;

    printf("enter the one number");
    scanf("%d",&a);

    (a%2==0)?printf("\n%d is even number",a):printf("\n%d is odd number",a);
}
