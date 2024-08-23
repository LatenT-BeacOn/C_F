#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int a,b,count=0,sum=0;
    scanf("%d %d",&a,&b);
    if(a==1 || a==2)
    printf("1\n");
   // else if(a==2)
   // printf("2\n");
   else
    {
        for(int i=0;i<100000;i++)
        {
            sum=sum+b;
            if(sum>a-2)
           // count++;
           break;
            else 
            count++;
           // break;
        }
        if(count*b<a-2)
        printf("%d\n",count+2);
        else
        printf("%d\n",count+1);
    }
   
    }

    return 0;
}