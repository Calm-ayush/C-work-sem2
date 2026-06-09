#include <stdio.h>

int range(int *arr, int n)
{
    int max = *arr;
    int min = *arr;

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }

        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }

    return max - min;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", range(arr, n));

    return 0;
}