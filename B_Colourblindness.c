#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a;
        scanf("%d",&a);
        char A[a],B[a];
        scanf("%s",A);
        scanf("%s",B);
        int c=0,b=0,c1=0,B1=0;
        for(int i=0;i<a;i++)
        {
            if(A[i]=='G')
            c++;
            else if(A[i]=='B')
            b++;
        }
      for(int i=0;i<a;i++)
        {
            if(B[i]=='G')
            c1++;
            else if(B[i]=='B')
            B1++;
        }
        if((c+b)==(c1+B1))
        //cout<<"YES"<<endl;
        printf("YES\n");
        else
       // cout<<"NO"<<endl;
       printf("NO\n");


    }
    
}