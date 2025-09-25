/*Write a C program to input marks and print the grade:

90–100: A

80–89: B

70–79: C

60–69: D

Below 60: Fail */
#include<stdio.h>
int main()
{
    int marks;


    printf("enter the value integrers:");
    scanf("%d%d%d%d",&marks);

    if(marks>=90||marks<=100)
    printf("%d=A Grade",marks);

    else if(marks>=80||marks<=89)
    printf("%d=B Grade",marks);

    else if(marks>=70||marks<=79)
    printf("%d=C Grade",marks);

    else if(marks>=60||marks<=69)
    printf("%d=D Grade",marks);

    else if(marks<60)
    printf("%d= fail",marks);

}





