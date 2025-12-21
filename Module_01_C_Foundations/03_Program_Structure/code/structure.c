#include <stdio.h>

void application_task(void)
{
    printf("Application running\n");
}

int main()
{
    printf("System Init\n");

    while(1)
    {
        application_task();
    }

    return 0;
}
