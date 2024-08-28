#include <iostream>

long long power(long long a, long long b)
{
    long long res = 1;

    a = a % 1000000007;
    while (b > 0)
	{
        if (b % 2 == 1)
            res = (res * a) % 1000000007;
        a = (a * a) % 1000000007;
        b = b / 2;
    }
    return res;
}
int	main()
{
	long long	N;

	std::cin >> N;
	std::cout << power(3, N) << std::endl;
}