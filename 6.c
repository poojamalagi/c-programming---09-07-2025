/*Write a program to check if a number is even or odd */
#include<stdio.h>
int main()
{
    int number;
    printf("please enter the number");
    scanf("%d",&number);

    if(number %2==0)
    printf("the given number is even\n");

    else
    printf("the given number is odd");
}
