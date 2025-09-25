/*WAP Input price and add 18% GST */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;

    printf("enter the value of a,b,c;");
    scanf("%d%d%d",&a,&b,&c);

    x1=((-b)+sqrt((pow(b,2))-(4*a*c)))/(2*a);
    x2=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);

    printf("x1=%f,x2=%f",x1,x2);



}
