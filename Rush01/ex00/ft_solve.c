/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidzawi <sidzawi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:25:34 by sidzawi           #+#    #+#             */
/*   Updated: 2024/02/18 20:15:23 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_check_mat_and_print(int mat[4][4], int tab[16])
{
	if (ft_check_mat(mat, tab))
	{
		ft_display(mat, 4, 4);
		return (1);
	}
	return (0);
}

void	ft_increment_row(int *row, int *col)
{
	*row += 1;
	*col = 0;
}

int	ft_solve(int mat[4][4], int tab[16], int row, int col)
{
	int	i;
	int	c;
	int	next_row;
	int	next_col;

	if (row == 4 && col == 0) 
		return (ft_check_mat_and_print(mat, tab));
	next_row = row;
	next_col = col;
	if (next_col < 3)
		next_col++;
	else if (next_row < 4)
		ft_increment_row(&next_row, &next_col);
	i = 0;
	c = 0;
	while (++i <= 4)
	{
		mat[row][col] = i;
		if (c == 0 && ft_check_row(mat, row) && \
				ft_check_col(mat, col))
			c = ft_solve(mat, tab, next_row, next_col);
		mat[row][col] = 0;
	}
	return (c);
}
