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
	long long	N, a, i, j;
	
	long long	primes[78498];
	long long	primes_2[78498];

	i = 0;
	j = 0;
	while (j < 78498)
	{
		if (is_prime(i))
		{
			primes[j] = i;
			primes_2[j] = i * i;
			j++;
		}
		i++;
	}
	std::cin >> N;
	long long	nums[N];
	i = 0;
	while (i < N)
	{
		std::cin >> nums[i];
		i++;
	}
	j = 0;
	while (j < N)
	{
		bool	found = false;
		i = 0;
		while (i < 78498)
		{
			if (primes_2[i] == nums[j])
			{
				std::cout << "YES" << std::endl;
				found = true;
				break ;
			}
			i++;
		}
		if (!found)
			std::cout << "NO" << std::endl;
		j++;
	}
}