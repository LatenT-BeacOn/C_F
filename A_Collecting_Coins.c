#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
       int a,b,c,d;
       scanf("%d%d%d%d",&a,&b,&c,&d);
       if((a+b+c+d)%3==0 &&((a<(a+b+c+d)/3) && (b<(a+b+c+d)/3)&&(c<(a+b+c+d)/3)))
       printf("YES\n");
       else
       printf("NO\n");
    }
    return 0;
}