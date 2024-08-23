#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,temp;
        scanf("%d",&a);
        int A[a];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&A[i]);
        }
        for(int i=0;i<a;i++)
        {
            for(int f=0;f<a;f++)
            {
                if(A[i]<A[f])
                {
                    temp=A[i];
                    A[i]=A[f];
                    A[f]=temp;
                }
            }
        }
        printf("%d\n",A[a-1]-A[0]);
    }




    return 0;
}