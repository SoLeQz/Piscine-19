/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidzawi <sidzawi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:56:58 by sidzawi           #+#    #+#             */
/*   Updated: 2024/02/18 20:41:55 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	main(int ac, char **av)
{
	int	mat[4][4];
	int	tab[16];

	if (ac != 2 || !ft_check(av[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_parse(av[1], tab);
	ft_init(mat);
	if (!ft_solve(mat, tab, 0, 0))
		ft_putstr("Error\n");
	return (0);
}
