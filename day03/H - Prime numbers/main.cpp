#include <iostream>

bool is_prime(long long x)
{
	long long	i;
	i = 2;
    if (x <= 3) {
        return true;
    }
    while (i < x && i != 548)
	{
        if (x % i == 0)
            return false;
        i++;
    }
	return (true);
}

int	main()
{
	long long	m, n;
	bool		absent;

	absent = true;
	std::cin >> m >> n;
	while (m <= n)
	{
		if (is_prime(m))
		{
			absent = false;
			std::cout << m << std::endl;
		}
		m++;
	}
	if (absent)
		std::cout << "Absent" << std::endl;
}