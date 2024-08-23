#include<stdio.h>
int main()
{
    int a,b,count=0,m=0;
    scanf("%d%d",&a,&b);
    int A[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(A[i]<=b)
        count++;
        else
        m++;
    }
    printf("%d\n",(count+(m*2)));
    return 0;

}