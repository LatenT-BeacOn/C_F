#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    scanf("%s",A);
    int len=strlen(A);
    int temp,i;
    for(i=0;i<len-1;i+=1);
    { 
        for(int j=0;j<len-1;j+=1)
        {
            if(A[j]>=A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }



    }
    for(i=0;i<len;i++)
    {
        printf("%d+",A[i]);
    }


    return 0;
}