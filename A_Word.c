#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int count=0,m=0;
        for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
       count++;
       if(ch[i]>=97 && ch[i]<=127)
       m++;
    }
    if(count<=m){
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        ch[i]=ch[i]+32;
    }
    printf("%s\n",ch);}
    else{
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=97 && ch[i]<=127)
        ch[i]=ch[i]-32;
    }
    printf("%s\n",ch);}


    return 0;
}