#include<stdio.h>
int main()
{
    int A[4];
    for(int i=0;i<4;i++)

    {
        scanf("%d",&A[i]);
    }
    int c=0,temp;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(A[i]>=A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
           if(A[i]==A[i+1])
           c++;
    }
    printf("%d\n",c);



    return 0;
}