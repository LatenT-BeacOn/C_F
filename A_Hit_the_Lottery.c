#include<stdio.h>
int main()
{
    int a,sum=0,rem=0;
    scanf("%d",&a);
    int A[5]={100,20,10,5,1};
    for(int i=0;i<5;i++)
    {
        rem=a/A[i];
        sum=sum+rem;
        a=a%A[i];
    }
 printf("%d\n",sum);

    return 0;
}