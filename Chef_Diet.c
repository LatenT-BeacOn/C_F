#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, c;
        scanf("%d%d", &b, &c);
        int A[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &A[i]);
        }
        int count = 0, p = 0;
        for (int i = 0; i < b; i++)
        {
            if(count +( A[i] >= c){
            count = count +( A[i] - c);
           /* if (count < 0)
            {
                count = 0;
                printf("NO %d\n", i + 1);
                break;
            }*/
            else
            {
                p = 1;}
        }
        if (p == 1)
            printf("YES\n");
    }
}