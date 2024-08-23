#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    fgets(A,100,stdin);
   // int len=strlen(A);

    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ')
        {
            A[i]='\n';
        }
    }
    printf("%s",A);
    


    return 0;
}