/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:07:09 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/08 10:51:59 by nicleena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				write (1, " ", 1);
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				if (a != 98)
					write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
//
//int	main()
//{
//	ft_print_comb2();
//	return (0);
//}
