/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet <hmrabet@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:25:15 by hmrabet           #+#    #+#             */
/*   Updated: 2024/08/27 14:48:29 by hmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	long long	n, fact;
	long long i;

	i = 1;
	fact = 1;
	std::cin >> n;
	while (i <= n)
	{
		fact = fact * i;
		if (fact > 998244353)
			fact = fact % 998244353;
		i++;
	}
	std::cout << fact << std::endl;
}