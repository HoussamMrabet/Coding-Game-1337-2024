#include <iostream>
#include <string.h>

long long	factorial(long long n)
{
	long long fact = 1;
	long long i = 1;
	if (n < 1)
		return (1);
	while (i <= n)
	{
		fact = (fact * i) % 1000000007;
		i++;
	}
	return (fact);
}

long long	how_many(std::string input, char a)
{
	long long i;
	long long count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] == a)
			count++;
		i++;
	}
	if (!count)
		return (1);
	return (count);
}

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

int	main()
{
	long long	len;
	long long	res;
	char		i;
	std::string input;

	res = 1;
	i = 'a';
	std::cin >> input;
	len = input.length();
	len = factorial(len);
	while (i <= 'z')
	{
		res = (res * factorial(how_many(input, i))) % 1000000007;
		i++;
	}
	std::cout << (len * power(res, 1000000005, 1000000007)) % 1000000007 << std::endl;
}