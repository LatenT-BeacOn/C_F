#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int num1,num2,num3;
        scanf("%d%d%d",&num1,&num2,&num3);
        if(num1>num2 && num1>num3)
        {
            if(num2<num3)
            printf("%d\n",num3);
            else
            printf("%d\n",num2);
        }
       else  if(num2>num1 && num2>num3)
        {
            if(num1<num3)
            printf("%d\n",num3);
            else
            printf("%d\n",num1);
        }
         if(num3>num2 && num3>num1)
        {
            if(num2<num1)
            printf("%d\n",num1);
            else
            printf("%d\n",num2);
        }
    }




    return 0;
}