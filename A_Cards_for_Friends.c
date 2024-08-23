#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c==1)
    printf("YES\n");
    else{
    if(a%2==0 )
    {
        int s=(a/2)*b;
        if(s*2>=c)
        printf("YES\n");
        else
        printf("NO\n");


    }
   else if(b%2==0 || (a%2==0 && b%2==0))
    {
        int s=(b/2)*a;
        if(s*2>=c)
        printf("YES\n");
        else
        printf("NO\n");


    }
    else if(a%2!=0 && b%2!=0)
    printf("NO\n");
    }}

    return 0;
}