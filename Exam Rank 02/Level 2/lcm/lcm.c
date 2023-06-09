/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:04:01 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 18:49:08 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if ((n % a == 0) && (n % b == 0))
			return (n);
		n++;
	}
	return (0);
}
// #include <stdlib.h>
// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		int a = atoi(argv[1]);
// 		int b = atoi(argv[2]);
// 		unsigned int test = lcm(a, b);
// 		printf("%u\n", test);
// 	}
// 	return (0);
// }