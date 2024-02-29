/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:01:55 by thblonde          #+#    #+#             */
/*   Updated: 2024/02/10 21:10:41 by thblonde         ###   ########.fr       */
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

void	rush02(int x, int y)
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
			if ((cy == 1 && cx == 1) || (cy == 1 && cx == x && x > 1))
				ft_putchar('A');
			else if ((cy == y && cx == x) || (cy == y && cx == 1))
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
