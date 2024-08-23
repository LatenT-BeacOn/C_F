#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       char A[4];
       scanf("%s",A);
       if((A[0]=='Y' || A[0]=='y') && (A[1]=='E' || A[1]=='e') && (A[2]=='s' || A[2]=='S'))
       printf("YES\n");
       else
       printf("NO\n");
    }
    



    return 0;
}