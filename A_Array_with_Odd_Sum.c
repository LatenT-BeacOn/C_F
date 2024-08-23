#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
     int a;
     scanf("%d",&a);
     int A[a];
     for(int i=0;i<a;i++)
     {
        scanf("%d",&A[i]);

     }
     int sum=0;
     for(int i=0;i<a;i++)
     {
        if(A[i]%2==1)
        sum++;
     }
     if(sum%2==0 && sum%a==0)
     printf("NO\n");
     else
     printf("YES\n");


    }
    
}