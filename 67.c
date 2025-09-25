/* divide and conquer */

 #include<stdio.h>
 int main()
 {
     int i,low,high,arr[100],n,key,mid, flag;

     printf("enter the size of numbers=");
     scanf("%d",&n);

     printf("\nenter the %d number",n);
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

     printf("\nenter the key element");
     scanf("%d",&key);

     low=0;
     high=n-1;


     while(low<high)
     {
         mid=(low+high)/2;
         if(key>arr[mid])
            low=mid+1;
         else if(key<arr[mid])
            high=mid-1;
         else if(key==arr[mid])
         {
             flag=1;
             printf("\n%d is found",key);
             break;
         }
     }

     if(flag==0)
        printf("\n%d is not found",key);



 }
