#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,c;
    int start=0,max=0;
    for(int i=0;i<a;i++)
    {
    scanf("%d%d",&b,&c);
    start=(start-b)+c;
        if(max<start)
        max=start;
    }
    


    
    printf("%d\n",max);



    return 0;
}