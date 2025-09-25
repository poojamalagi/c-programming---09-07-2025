#include<stdio.h>
int main()
{
    int a,b,c,d,choice;


    do
    {
        printf("\nenter value of a,b,c and d");
        scanf("%d%d%d%d",&a,&b,&c,&d);

       printf("\n1.Largest\n2.Smallest\n3.equal or not\n4.exit");
       printf("\nchoose the one option");
       scanf("%d",&choice);

       switch(choice)
       {
         case 1:
             if(a>b&&a>c&&a>d)
                printf("%d is largest",a);
             else if(b>c&&b>d)
                printf("%d is largest",b);
             else if(c>d)
                printf("%d is largest",c);
             else
                printf("%d is largest",d);
             break;
         case 2:
             if(a<b&&a<c&&a<d)
                printf("%d is largest",a);
             else if(b<c&&b<d)
                printf("%d is largest",b);
             else if(c<d)
                printf("%d is largest",c);
             else
                printf("%d is largest",d);
             break;
         case 3:
             if(a==b&a==c&&a==d)
             printf("%d is equal");
             else
             printf("%d is not equal");

             break;

         default:
             printf("exit");
        }

    }while(choice<4);

}
