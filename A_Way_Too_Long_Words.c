#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d",&n);
    while(n--)
    {
        char A[1000];
        scanf("%s",A);
        int len=strlen(A);
       
        if(len>10)
        {
            printf("%c%d%c\n",A[0],len-2,A[len-1]);

        }
        else
            printf("%s\n",A);


    }
    return 0;
}
