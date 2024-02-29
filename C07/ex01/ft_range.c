/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <nicleena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:29:27 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/28 12:41:53 by nicleena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int *range;
	range = ft_range(-10, 10);
	for(int i = 0; i < 20; i++)
		printf("%d, ", range[i]);
	return 0;
}*/
