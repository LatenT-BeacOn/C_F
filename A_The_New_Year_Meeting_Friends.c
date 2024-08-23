#include<stdio.h>
int main()
{
    //int a,b,c;
   // scanf("%d%d%d",&a,&b,&c);
    int A[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&A[i]);

    }
    /*int max=A[0];
    
    for(int i=0;i<3;i++)
    {
        if(max<A[i])
        max=A[i];
        
    }
    int min=A[0];
    for(int i=0;i<3;i++)
    {
       if(min>A[i]);
        min=A[i];
    }
    
   printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",(max-min));*/
    int temp;
    for(int t=0;t<3;t++)
    {
        for(int i=0;i<3;i++)
        {
            if(A[t]>A[i])
            {
                temp=A[t];
                A[t]=A[i];
                A[i]=temp;
            }
        }
    }
    /* for(int t=0;t<3;t++)
    {
       printf("%d ",A[t]);
    }*/
    printf("%d\n",(A[0]-A[1])+(A[1]-A[2]));
    

    return 0;
}