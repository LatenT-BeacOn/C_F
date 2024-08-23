#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a;scanf("%d",&a);
        int A[a*2],b[a+1]={0};
        
        for(int i=0;i<a*2;i++)
        {
            scanf("%s",A[i]);
            if(b[A[i]]==0)
            printf("%d",A[i]);
            b[A[i]]++;
        }
       
    }
    
}