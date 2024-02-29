/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:31:39 by thblonde          #+#    #+#             */
/*   Updated: 2024/02/10 20:10:59 by thblonde         ###   ########.fr       */
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

void	rush04(int x, int y)
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
			if ((cy == 1 && cx == 1) || (cy == y && cx == x && y > 1 && x > 1))
				ft_putchar('A');
			else if ((cy == 1 && cx == x) || (cy == y && cx == 1))
				ft_putchar('C');
			else if (cy == 1 || cy == y || cx == 1 || cx == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
