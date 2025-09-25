/* WAP to find simple interest by assigning required values */
#include<stdio.h>
int main()
{
    int value1,value2,interest;
    float value3;

    value1=10000;
    value2=5;
    value3=1.6;

    interest=value1*value2*value3/100;

    printf("Simple interest=%d",interest);
}
