#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        if(i%2!=0)
        {
            printf("#");
        }
        else
        {
          if(i%4==0)
          {
            if(j==1)
        printf("#");
        else
        printf(".");
        }
        else {
            if(j==b)
            printf("#");
            else
            printf(".");

        }
        
        

        }
      printf("\n");

    }

    return 0;
}