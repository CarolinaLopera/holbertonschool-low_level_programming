#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */

    n = 0;
    int last = n % 10;

    if (last > 5)
    {
        printf("Last digit of %i is %i and is greater than 5\n", n, last);
    }
    else if (last == 0)
    {
        printf("Last digit of %i is %i and is 0\n", n, last);
    }
    else if (last < 6)
    {
        printf("Last digit of %i is %i and is less than 6 and not is 0\n", n, last);
    }
    return (0);
}
