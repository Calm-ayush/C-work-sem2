/* Return 1 if kth bit is ON
   Return 0 if kth bit is OFF */

#include <stdio.h>

int checkKthBit(int n, int k)
{
    int m = 1<<k;
    return (m&n)!=0;
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);

        printf("%d\n", checkKthBit(n,k));
    }

    return 0;
}