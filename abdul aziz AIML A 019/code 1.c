
//Here is a simple C program to print the given pattern:

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
