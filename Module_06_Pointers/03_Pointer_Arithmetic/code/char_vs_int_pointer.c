#include <stdio.h>

int main()
{
    char c = 10;
    int i = 10;

    char *pc = &c;
    int  *pi = &i;

    printf("char pointer before = %p\n", pc);
    pc++;
    printf("char pointer after  = %p\n\n", pc);

    printf("int pointer before  = %p\n", pi);
    pi++;
    printf("int pointer after   = %p\n", pi);

    return 0;
}
