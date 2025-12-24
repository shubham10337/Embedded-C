#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("First element = %d\n", *p);
    printf("Second element = %d\n", *(p + 1));
    printf("Third element = %d\n", *(p + 2));

    return 0;
}
