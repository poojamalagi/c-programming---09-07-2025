#include<stdio.h>
int main()
{
    int a;
    char ch,ch1;
    printf("enter letter");
    scanf("%d",&a);
   while(a>=65&&a<=90)
    {
        ch=a;
        ch1=ch+32;
        printf("\n%c",ch);
         printf("\t%c",ch1);


        a++;
    }

}






