/*perfect number */
#include<stdio.h>
int main()
{
    int a, per,n;
    per=0;
    printf("enter the number");
    scanf("%d",&n);

    a=n-1;
    while(a>=1)
    {
        if(n%a==0)
        {
           per+=a;
        }
        a--;
    }



    if(per==n)
     printf("\n%d is perfect number",n);
    else
    printf("%d is not perfect number",n);

}
