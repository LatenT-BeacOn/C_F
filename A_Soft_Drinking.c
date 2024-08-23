#include<stdio.h>
int main()
{
    int A[8];
   // scanf("%d",&A[i]);
    for(int i=0;i<8;i++)
    {
        scanf("%d",&A[i]);
    }

    int d=(A[1]*A[2])/A[6];
    int e=(A[3]*A[4]);
    int f=(A[5]/A[7]);
   if(A[0]>d || A[0]>e || A[0]>f)
   {
    printf("0\n");
   }
else
{
     if(d<=e && d<=f)
     {
        printf("%d\n",d/(A[0]));
     }
    else if(f<=e && f<=d)
     {
        printf("%d\n",f/(A[0]));
     }
    else if(e<=d && e<=f)
     {
        printf("%d\n",e/(A[0]));
     }
}
    return 0;
}