#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 2)
        return 0;

    int a1[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a1[i]);

    int a = a1[0];
    int b = a1[0];

    for (int i = 1; i < n; i++)
        if (a1[i] > a)
            a = a1[i];

    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (a1[i] < a)
        {
            if (!f || a1[i] > b)
            {
                b = a1[i];
                f = 1;
            }
        }
    }

    if (f)
    {
        printf("%d\n", a);
        printf("%d\n", b);
    }

    return 0;
}/
