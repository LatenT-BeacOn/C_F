#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
    int a;
    scanf("%d",&a);
    int A[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    if(a==1 && A[0]==0)
    printf("0\n");
   else if(a>1){
    int c=0,M=0;
        for(int i=0;i<a;i++)
    {
       if(A[i]==A[i+1])
        M=1;
       
    }
    if(M==1)
    printf("-1\n");
    for(int i=0;i<a;i+=2)
    {
      
        if(A[i]%2!=0)
        c++;
    }
    printf("%d\n",c);}
     
    else
    printf("-1\n");




   }



    return 0;
}