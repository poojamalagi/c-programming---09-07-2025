/*WAP to read 3 subject marks calculate total and percentage and display the result
0-34 - fail
35 - 49-pass
50-59-second class
60-74-frist class
75-100 -dis
*/
#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    float per;

    printf("enter the marks");
    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total/3.0f;

    printf("\ntotal percentage=%.0f",per);

    if(per>=75&&per<=100)
    printf("\ndist",per);

    else if(per>=60&&per<=74)
     printf("\nfirst class",per);

    else if(per>=50&&per<=59)
     printf("\nsecond class",per);

     else if(per>=35&&per<=49)
     printf("\npass",per);

     else if(per>=0&&per<=34)
     printf("\nfail",per);

     else
    printf("\ninvaild",per);
}

