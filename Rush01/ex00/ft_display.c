/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <nicleena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:29:46 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/18 20:13:39 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_display_line(int *line_int, int size)
{
	int		i;
	char	c;

	if (size <= 0 || !line_int)
		return ;
	i = 0;
	while (i < size)
	{
		c = '0' + line_int[i];
		write(1, &c, 1);
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_display(int tab[4][4], int size_lig, int size_col)
{
	int	i;

	i = 0;
	if ((size_lig <= 0 || size_col <= 0) || !tab)
		return ;
	while (i < size_lig)
	{
		ft_display_line(tab[i], size_col);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
