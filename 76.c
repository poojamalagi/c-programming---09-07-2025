// read string and print a string charecter by charecter //
#include<stdio.h>
int main()
{
    char str[10];
    int i;

    printf("enter a string");
    scanf("%s",str);//gets(str)

    for(i=0;str[i]!='\0';i++)
        printf("%c", str[i]);
}
