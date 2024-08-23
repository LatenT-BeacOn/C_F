#include<stdio.h>
int main()
{
    int A[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&A[i]);
    }
    int max=A[0];
    for(int i=0;i<4;i++)
    {
        if(max<A[i])
        max=A[i];

        
    }
    
    p
    /*int b[3]=A[4]-max;
    for(int i=0;i<3;i++)
    {
        printf("%d ",b[i]);
    }
    printf("%d ",max-A[i]);
    printf("%d ",max-A[i]);
    printf("%d ",max-A[i]);*/
    return 0;
}