/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <nicleena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:07:25 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/18 20:19:53 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_parse(char *argv, int tab[16])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (argv[j] != '\0' && i < 16)
	{
		tab[i] = argv[j] - '0';
		j += 2;
		i++;
	}
}

void	ft_init(int mat[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mat[i][j] = 0;
			j++;
		}
		i++;
	}
}
