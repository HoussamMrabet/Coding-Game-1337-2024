#include <stdio.h>

int is_prime(long long x)
{
	long long	i;
	i = 2;
    if (x <= 3) {
        return 1;
    }
    while (i < x && i != 1000000000001LL)
	{
        if (x % i == 0)
            return 0;
        i++;
    }
	return (1);
}

int	main()
{
	long long	n, prime;
	int			found_one;

	found_one = 0;
	prime = 2;
	scanf("%lld", &n);
	printf("%lld", n);
	while (n > 1)
	{
		if (is_prime(prime) && !(n % prime))
		{
			if (!found_one)
			{
				found_one = 1;
				printf(":");
			}
			n /= prime;
			printf(" %lld", prime);
			continue ;
		}
		prime++;
	}
	printf("\n");
	return (0);
}