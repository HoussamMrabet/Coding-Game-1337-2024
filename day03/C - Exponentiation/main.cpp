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
	long long	n;

	std::cin >> n;
	while (n > 0)
	{
		long long	a, b, res;
		std::cin >> a >> b;
		std::cout << power(a, b) << std::endl;
		n--;
	}
}