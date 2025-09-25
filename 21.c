/*Identify a character type */
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch>='z'))
       printf("%c=Letter",ch);

    else if (ch >= 48 && ch <= 57)
        printf("%c is a digit\n", ch);
    else
        printf("%c is a special character\n", ch);

}
