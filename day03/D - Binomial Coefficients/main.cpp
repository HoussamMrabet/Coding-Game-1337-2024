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

long long modMul(long long a, long long b, long long m)
{
    return ((a % m) * (b % m)) % m;
}

int main()
{
	long long n, a, b, i, acc, mod, factA, factB, factAB;
	mod = 1000000007LL;
	std::cin >> n;
	long long facts[1000001];
	facts[0] = 1;
	i = 1;
	acc = 1;
	while (i < 1000001)
	{
		acc = (acc * i) % mod;
		facts[i] = acc;
		i++;
	}
	while (n > 0)
	{
		std::cin >> a >> b;
		i = 1;
		std::cout << modDiv(facts[a] , modMul(facts[b], facts[a - b], mod), mod) << std::endl;
		n--;
	}
}