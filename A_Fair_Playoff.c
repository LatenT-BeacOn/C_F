#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int A[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &A[i]);
        }
        if ((A[0] > A[2] && A[0] > A[3]) && (A[1] > A[2] && A[1] > A[3]) || (A[2] > A[1] && A[2] > A[0]) && (A[3] > A[1] && A[3] > A[0]))
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }

    return 0;
}