/*Check if a given year is a leap year. meaning?*/
#include<stdio.h>
int main()
{
    int year;

    printf("enter the year:");
    scanf("%d",&year);

    if ((year%4==0&&year%100!=0)||(year%400==0))
    {
        printf("\n%d is leap year");
    }
    else
    {
        printf("\n%d is not a leap year");
    }
}
