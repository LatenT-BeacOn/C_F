#include <stdio.h>
int main()
{
    int a, sum = 0, c = 0;
    scanf("%d", &a);
    for (int i = 1;; i++)
    {
        sum = sum + i;
        if (sum <= a)
            c++;
        else
          break;
    }
    printf("%d\n", c);
    return 0;
}