#include <iostream>

int	main()
{
	long long	N, i, div;
	int	checker;

	std::cin >> N;
	i = 0;
	long long	l[N];
	
	while (i < N)
		std::cin >> l[i++];
	std::sort(l, l + N);
	div = l[0];
	while (div > 1)
	{
		checker = 1;
		i = 0;
		while (i < N)
		{
			if (l[i] % div)
			{
				checker = 0;
				break ;
			}
			i++;
		}
		if (checker)
		{
			std::cout << div << std::endl;
			break ;
		}
		div--;
	}
}