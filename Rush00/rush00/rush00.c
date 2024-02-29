/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:26:37 by thblonde          #+#    #+#             */
/*   Updated: 2024/02/10 22:39:02 by thblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	validnb(int x, int y)
{
	if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
	{
		write(1, "Please, enter valid numbers\n", 28);
		return (1);
	}
	else
		return (0);
}

void	rush00(int x, int y)
{
	int	cx;
	int	cy;

	cy = 1;
	if (validnb(x, y) == 1)
		cy = y + 1;
	while (cy <= y)
	{
		cx = 1;
		while (cx <= x)
		{
			if ((cy == 1 && cx == 1) || (cy == y && cx == x)
				|| (cy == y && cx == 1) || (cy == 1 && cx == x))
				ft_putchar('o');
			else if (cx == 1 || cx == x)
				ft_putchar('|');
			else if (cy == 1 || cy == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
