#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        int A[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (A[i] < A[j])
                {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        int sum=0;
        /*for (int i = 0; i < a; i++)
        {
            printf("%d ", A[i]);
        }*/

       for(int i=0;i<a;i++)
       {
        //if(A[0]!=A[i])
       // {
            sum=sum+(A[i]-A[0]);
       // }
       }
       printf("%d\n",sum);



    }
}