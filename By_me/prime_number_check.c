
#include <stdio.h>
int main()
{
    int n = 1;
    int is_prime = 1;
    if (n < 2)
    {
        printf("Prime number starts from 2!");
    }
    else
    {
        for (int i = 2; i <= (n / 2); i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    return 0;
}
