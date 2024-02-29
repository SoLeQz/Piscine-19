/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_mat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidzawi <sidzawi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:32:44 by sidzawi           #+#    #+#             */
/*   Updated: 2024/02/18 19:33:06 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_check_row(int mat[4][4], int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (mat[row][i] == mat[row][j] && mat[row][i] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_col(int mat[4][4], int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (mat[i][col] == mat[j][col] && mat[i][col] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_mat(int mat[4][4], int tab[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!ft_check_col(mat, i) || !ft_check_row(mat, i))
			return (0);
		i++;
	}
	i = 0;
	while (i < 16)
	{
		if (i / 4 == 0 && !ft_check_top(mat, tab[i], i % 4))
			return (0);
		else if (i / 4 == 1 && !ft_check_bottom(mat, tab[i], i % 4))
			return (0);
		else if (i / 4 == 2 && !ft_check_left(mat, tab[i], i % 4))
			return (0);
		else if (i / 4 == 3 && !ft_check_right(mat, tab[i], i % 4))
			return (0);
		i++;
	}
	return (1);
}
