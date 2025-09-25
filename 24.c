/*wap read 3 subject mark and display the result and percentage as per below */
/*1.addition
2.subtraction
3.multiplication
4.division
*/

#include<stdio.h>
int main()

{
    int a,b,choice;
    float total;

    printf("enter the two value");
    scanf("%d%d",&a,&b);

    printf("choose operate \n1.add,\n2.mul,\n3.sub,\n4.divi:");
    scanf("%d%d",&choice);

    if(choice==1)
    {
        total=a+b;
        printf("\nadd=%f",total);
    }

    else if(choice==2)
    {
        total=a-b;
        printf("\nsub=%f",total);
    }
    else if(choice==3)
    {
       total=a*b;
       printf("\nmul=%f",total);
    }
    else if (choice==4)
    {
        total=(float)a/b;
        printf("\ndivi=%f",total);
    }

    else
        printf("invalid operate");

}
