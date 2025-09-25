#include<stdio.h>
int main()
{
    int a=1,ecount=0,ocount=0;
    while(a<=50)
    {
        if(a%2==0)
            ecount++;
        else
            ocount++;

        a++;
    }

    printf("ecount=%d\nocount=%d",ecount,ocount);

}
