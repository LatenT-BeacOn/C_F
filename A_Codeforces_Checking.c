#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        /*char ch;
        scanf("%c\n",&ch);
        if(ch=='c' || ch=='o' || ch=='d' || ch=='e' || ch=='f' || ch=='r' || ch=='s')
        printf("YES\n");
        else
        printf("NO\n");*/

        char ch;
        scanf("%c\n", &ch);
        char st[] = "codeforces";
        int x = 0;
        for (int i = 0; i < strlen(st); i++)
        {
            if (st[i] == ch)
            {
                x = 1;
            }
        }
        if (x == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}