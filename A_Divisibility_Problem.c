#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
       int n,m;
       scanf("%d%d",&n,&m);
       if(n%m==0)
       printf("0\n");
      else if(n>m){
       printf("%d\n",m-(n%m));
       }

       else 
       printf("%d\n",m-n);

    }

    return 0;
}