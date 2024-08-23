#include<stdio.h>
#include<string.h>
int main()
{
    char A[1000];
    scanf("%s",A);
   /*for(int i=0;i<1000;i++)
    {
        scanf("%2c",&A[i]);*/
        /* if(A[i]=='-.')
        printf("1");
        else if(A[i]=='--')
        printf("2");
        else
        printf("0");*/
   // }
    int len=strlen(A);
   for(int i=0;i<=len-1;i++)
    {
        if(A[i]=='-' && A[i+1]=='.')
       { printf("1");
       i++;

       }
        else if(A[i]=='-' && A[i+1]=='-')
       { printf("2");
       i++;
       }

        else if(A[i]=='.') {
        printf("0");
        }

    }
   
    printf("\n");



    return 0;
}