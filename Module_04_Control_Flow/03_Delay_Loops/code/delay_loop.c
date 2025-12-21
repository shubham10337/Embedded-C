#include <stdio.h>

void delay(void)
{
    int i;

    for (i = 0; i < 100000; i++)
    {
        // empty delay loop
    }
}

int main()
{
    while (1)
    {
        printf("Running...\n");
        delay();
    }

    return 0;
}
