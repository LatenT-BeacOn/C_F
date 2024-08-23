#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int a=0,b=0,c=0;
       char A[1000000];
       scanf("%s",A);
       int d=strlen(A);
       for(int i=0;i<d;i++)
       {
        if(A[i]=='B')
        a++;
       
       }
       if(a*2==d)
       printf("YES\n");
       else
       printf("NO\n");
    }
    
}