/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:23:01 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 19:22:49 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		while (argv[1][i])
			i++;
		while (i > 0)
		{
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && i > 0)
				i--;
			j = i--;
			if (argv[1][j] == ' ' && argv[1][i] == '\t')
				j++;
			while (argv[1][j] && argv[1][j] != ' ' && argv[1][i] != '\t')
				write(1, &argv[1][j++], 1);
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
