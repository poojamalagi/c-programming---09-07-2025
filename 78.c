#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int i,j;

    printf("enter the string=");
    scanf("%s",str1);
    j=strlen(str1);

    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    printf("\n copied String=%s",str2);
    printf("\nlength=%d",j);
}
