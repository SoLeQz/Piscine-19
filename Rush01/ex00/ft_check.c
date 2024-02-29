/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <nicleena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:11:01 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/18 20:35:19 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_check(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (i % 2 == 0 && (argv[i] < '1' || argv[i] > '4'))
		{
			return (0);
		}
		i++;
	}
	if (i != 31)
	{
		return (0);
	}
	return (1);
}
