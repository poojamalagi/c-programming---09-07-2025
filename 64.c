/*Write a program in C to store elements in an array and print them*/
#include<stdio.h>
int main()
{
    int i,a,j;
    for(i=0;i<=7;i++)
    {
         printf("%d ",i);
    }
    printf("\n");

    for(i=0;i<=7;i++)
    {
        for(j=i;j<7;j++)
         printf("  ");
        for(j=i;j<=i;j++)
            printf("%d\n ",j);
    }

    for(i=0;i<=7;i++)
      printf("%d",i);

    }


