#include <stdio.h>

void delay(void)
{
    volatile int i;

    for (i = 0; i < 100000; i++)
    {
        // delay
    }
}

int main()
{
    printf("Delay demo\n");
    delay();
    printf("Done\n");

    return 0;
}
