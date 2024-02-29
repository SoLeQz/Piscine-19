/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_mat_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidzawi <sidzawi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:32:04 by sidzawi           #+#    #+#             */
/*   Updated: 2024/02/18 19:32:25 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_check_top(int mat[4][4], int top, int col)
{
	int	i;
	int	c;
	int	m;

	i = 0;
	c = 0;
	m = 0;
	while (i < 4)
	{
		if (mat[i][col] == 0)
			return (0);
		if (mat[i][col] > m)
		{
			m = mat[i][col];
			c++;
		}
		i++;
	}
	if (c != top)
		return (0);
	return (1);
}

int	ft_check_bottom(int mat[4][4], int bottom, int col)
{
	int	i;
	int	c;
	int	m;

	i = 3;
	c = 0;
	m = 0;
	while (i >= 0)
	{
		if (mat[i][col] == 0)
			return (0);
		if (mat[i][col] > m)
		{
			m = mat[i][col];
			c++;
		}
		i--;
	}
	if (c != bottom)
		return (0);
	return (1);
}

int	ft_check_left(int mat[4][4], int left, int row)
{
	int	i;
	int	c;
	int	m;

	i = 0;
	c = 0;
	m = 0;
	while (i < 4)
	{
		if (mat[row][i] == 0)
			return (0);
		if (mat[row][i] > m)
		{
			m = mat[row][i];
			c++;
		}
		i++;
	}
	if (c != left)
		return (0);
	return (1);
}

int	ft_check_right(int mat[4][4], int right, int row)
{
	int	i;
	int	c;
	int	m;

	i = 3;
	c = 0;
	m = 0;
	while (i >= 0)
	{
		if (mat[row][i] == 0)
			return (0);
		if (mat[row][i] > m)
		{
			m = mat[row][i];
			c++;
		}
		i--;
	}
	if (c != right)
		return (0);
	return (1);
}
