#include <iostream>
int	main()
{
	int	n, x, add, res, i, j;

	(1) && (add = 0, res = 0, i = 0, j = 0);
	std::cin >> n >> x;
	int	l[n];
	while (i < n)
		std::cin >> l[i];
	i = 0;
	while (i < n)
	{
		j = i;
		while (j < n)
		{
			add += l[j];
			(add == x) && (res++);
			if (add > x)
				break ;
		}
		add = 0;
	}
	std::cout << res << std::endl;
}
