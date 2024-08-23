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
        int c = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (A[j] == A[i])
                 {   c++;
                break;}
            }
        }
        
            if (c > 0)
                printf("NO\n");
        else 
        printf("YES\n");
    }
}