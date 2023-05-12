#include <stdio.h>

void main()
{
    int num_primes;
    printf("Enter the number of primes you want to find: ");
    scanf("%d", &num_primes);

    int prime_list[num_primes], prime_count = 0;
    prime_list[prime_count++] = 2;

    for (int i = 3; prime_count < num_primes; i += 2)
    {
        int is_prime = 1;
        for (int j = 0; prime_list[j] * prime_list[j] <= i; j++)
        {
            if (i % prime_list[j] == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
            prime_list[prime_count++] = i;
    }
    printf("The prime number at position %d is: %d\n", num_primes, prime_list[num_primes - 1]);
}
