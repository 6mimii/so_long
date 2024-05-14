/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:19:15 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/12 22:29:41 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

bool	check_ber(char *argv)
{
	int		i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	if (i <= 4)
		return (false);
	i--;
	if (argv[i] == 'r')
	{
		i--;
		if (argv[i] != 'e')
			return (false);
		i--;
		if (argv[i] != 'b')
			return (false);
		i--;
		if (argv[i] != '.')
			return (false);
		return (true);
	}
	return (false);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (check_ber(argv[1]) == false)
			print_error();
	}
}
