#include <stdio.h>

int main()
{
    int marks = 75;

    if (marks >= 85)
        printf("Distinction\n");
    else if (marks >= 60)
        printf("First Class\n");
    else if (marks >= 35)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}
