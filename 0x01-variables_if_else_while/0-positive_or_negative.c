#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - begining of program execution
 *
 * Return: 0 when program execution is successful
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        /* Tell the user whether the number generated is positive or negative */
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        return (0);

}
