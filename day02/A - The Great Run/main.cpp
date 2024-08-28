/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet <hmrabet@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:55:41 by hmrabet           #+#    #+#             */
/*   Updated: 2024/08/27 12:01:07 by hmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <list>

int	main(void)
{
	int	i;
	int	j;
	int	cases;
	int N;
	int K;
	int	in;
	std::string	line1;
	std::string line2;
	i = 0;
	std::cin >> cases;
	while (i < cases)
	{
		int max;
		max = 0;
		std::cin >> N;
		std::cin >> K;		
		j = 0;
		int l[N];
		while (j < N)
		{
			std::cin >> l[j];
			j++;
		}
		j = 0;
		while (j < N - K + 1)
		{
			int tmp_max;
			int k;
			tmp_max = 0;
			k = j;
			while (k < j + K)
			{
				tmp_max += l[k]; 
				k++;				
			}
			if (tmp_max > max)
				max = tmp_max;
			j++;
		}
		std::cout << max << std::endl;
		i++;
	}
	
}