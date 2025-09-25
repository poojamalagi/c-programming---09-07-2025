#include<stdio.h>
int main()
{
    int n,r,x,fact=1,fact1=1,fact2=1,fact3=1,i,a;
    float ncr;

    printf("enter the valu of n and r: ");
    scanf("%d%d",&n,&r);

  i=n;
  a=r;
   for(fact1=1;n>=1;n--)
       {


           fact1*=n;

          //printf("\nN=%d",fact1);
       }

    x=i-a;
    for(x=i-a;x>1;x--)
    {


        fact2*=x;
       // printf("\nx=%d",fact2);


    }

    for(fact3=1;r>1;r--)
    {
        fact3*=r;
        //printf("\nR=%d",fact3);
    }

     ncr=(float)(fact1)/(fact2*fact3);
     printf("\nncr=%f",ncr);
}



