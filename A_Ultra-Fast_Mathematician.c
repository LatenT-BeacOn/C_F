#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int len=strlen(b);
    for(int i=0;i<len;i++)
    {
        if(a[i]==b[i])
        printf("0");
        else
        printf("1");
    }
  // printf("\n");


    return 0;
}