#include <iostream>
#include <vector>

long long SieveOfEratosthenes_algorithm(long long n)
{
	if (n < 2) return 0;
    std::vector<bool> prime(n + 1, true);
	std::vector<long long> prime_sum(n + 1, 0);
	long long	sum;
	sum = 0;
	prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (long long i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    for (long long p = 2; p <= n; p++) {
        if (prime[p]) {
            sum += p;
        }
        prime_sum[p] = sum;
    }
	return (sum);
}

int	main()
{
	long long	T, N, add, i;

	std::cin >> T;
	while (T > 0)
	{
		std::cin >> N;
		std::cout << SieveOfEratosthenes_algorithm(N) << std::endl;
		T--;
	}
}
