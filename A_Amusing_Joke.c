#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[1000];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    if(strlen(a)+strlen(b)!=strlen(c))
    printf("NO\n");
    else{
    int len=strlen(c);
    strcat(a,b);
    //printf("%s\n",a);
    int lenA=strlen(a);
    int temp;
    for(int i=0;i<lenA;i++)
    {
        for(int j=0;j<lenA;j++)
        {
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;}
        }

    }
    //printf("%s\n",a);
    
   for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(c[i]<c[j]){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;}
        }

    }
   //printf("%s\n",c);
   int m= strcmp(a,c);
    if(m==0)
    printf("YES\n");
    else
    printf("NO\n");}





    return 0;
}