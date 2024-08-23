#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int a;
        scanf("%d",&a);
        
    if(a==5){
        char A[a];
        scanf("%s",A);
        for(int t=0;t<a;t++)
        {
            for(int i=0;i<a;i++)
            {
                if(A[t]<A[i])
                {
                    int tem=A[t];
                    A[t]=A[i];
                    A[i]=tem;
                }
            }
        }
        //printf("%s\n",A);
        if(A[0]=='T' && A[1]=='i' && A[2]=='m' && A[3]=='r' && A[4]=='u')
        printf("YES\n");
        else
        printf("NO\n");}
        else
            {
            printf("NO\n");

        }

    }
}