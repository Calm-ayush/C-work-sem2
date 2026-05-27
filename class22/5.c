/* Clear the kth bit (0-based indexing)
   and return updated number */

#include <stdio.h>

int clearKthBit(int n, int k)
{
    int m = ~(1<<k);
    return m&n;
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);

        printf("%d\n", clearKthBit(n,k));
    }

    return 0;
}