#include <iostream>

bool is_prime(long long x)
{
	long long	i;
	i = 2;
    if (x <= 1) {
        return false;
    }
    if (x <= 3) {
        return true;
    }
    while (i < x && i != 1001)
	{
        if (x % i == 0)
            return false;
        i++;
    }
	return (true);
}

int	main()
{
	long long	T, N, i, j, sum;

	long long	primes[78498];
	long long	primes_sum[78498];

	i = 0;
	j = 0;
	sum = 0;
	while (i < 1000001 && j < 78498)
	{
		if (is_prime(i))
			primes[j++] = i;
		i++;
	}
	i = 0;
	while (i < 78498)
	{
		sum += primes[i];
		primes_sum[i] = sum;
		i++;
	}
	std::cin >> T;
	while (T > 0)
	{
		bool done;
		done = false;
		std::cin >> N;
		i = 0;
		if (N == 1000000)
			std::cout << primes_sum[78497] << std::endl;
		else
		{
			while (i < 78498)
			{
				if (primes[i] > N)
				{
					std::cout << primes_sum[i - 1] << std::endl;;
					done = true;
					break ;
				}
				i++;
			}
			if (!done)
				std::cout << primes_sum[78497] << std::endl;
		}
		T--;
	}
}
