/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int A[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }

    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(A[b]!=0  && A[i]>=A[b])
        count++;
        

    }
    if(count>0)
        printf("%d\n",count);
        else
        {
            printf("0\n");
        }

    return 0;
}*/
    #include<stdio.h>
    int main()
    {
     
        int a,b,count=0;
        scanf("%d %d",&a,&b);
        int A[a];
        for(int i=0; i<a; i++)
        {
     
            scanf("%d ",&A[i]);
        }
        for(int i=0; i<a; i++)
        {
            if(A[i]!=0)
            {
                if(A[b-1]<=A[i])
                    count++;
            }
     
     
     
        }
        if(count>0)
            printf("%d\n",count);
        else
            printf("0\n");
     
     
     
        return 0;
    }