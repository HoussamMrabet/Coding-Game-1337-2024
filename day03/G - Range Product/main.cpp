#include <iostream>

long long power(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

long long modInverse(long long a, long long m) { return power(a, m - 2, m); }

long long modDiv(long long a, long long b, long long m)
{
    a = a % m;
    long long inv = modInverse(b, m);
    return (inv * a) % m;
}

int	main()
{
	long long	N, Q, i, acc, mod;

	mod = 1000000007LL;
	std::cin >> N >> Q;
	long long	nums[N];
	acc = 1;
	i = 0;
	while (i < N)
	{
		std::cin >> nums[i];
		i++;
	}
	i = 0;
	while (i < N)
	{
		nums[i] = (acc * nums[i]) % mod;
		acc = nums[i];
		i++;
	}
	i = 0;
	while (i < Q)
	{
		long long	a, b;
		std::cin >> a >> b;
		if (a == 1)
			std::cout << nums[b - 1] << std::endl;
		else
			std::cout << modDiv(nums[b - 1], nums[a - 2], mod) << std::endl;
		i++;
	}
}