/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <nicleena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:23:28 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/11 15:04:39 by nicleena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else 
			return (0);
	}
	return (1);
}
//
//#include <stdio.h>
//
//int	main()
//{
//	printf("%d\n", ft_str_is_alpha("abcde"));
//	printf("%d", ft_str_is_alpha("asd12"));
//}
