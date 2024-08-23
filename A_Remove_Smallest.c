#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a;
        scanf("%d",&a);
        int A[a];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&A[i]);
        }
        int c=0,tem;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            if((A[i]<A[j]))
            {
                tem=A[i];
                A[i]=A[j];
                A[j]=tem;
            }

        }
        /* for(int i=0;i<a;i++)
        {
          printf("%d ",A[i]);

        }*/
         for(int i=0;i<a-1;i++)
        {
           
            if((A[i+1]-A[i])>1)
            c++;

            
        }
        if(c>0)
        {
            printf("NO\n");
        }
        else
        printf("YES\n");
    }
    


    return 0;
}