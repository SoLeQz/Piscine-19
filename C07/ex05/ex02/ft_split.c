/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicleena <nicleena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:38:55 by nicleena          #+#    #+#             */
/*   Updated: 2024/02/29 15:39:00 by nicleena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	countstrings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && checksep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !checksep(str[i], charset))
			i++;
	}
	return (count);
}

int	ftstrlenwithoutsep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !checksep(str[i], charset))
		i++;
	return (i);
}

char	*makeword(char *str, char *charset)
{
	int		i;
	char	*tab;
	int		strlen;

	strlen = ftstrlenwithoutsep(str, charset);
	tab = malloc((strlen + 1) * sizeof(char));
	i = 0;
	if (!tab)
		return (NULL);
	while (i < strlen)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tabtab;
	int		countstr;

	countstr = countstrings(str, charset);
	tabtab = malloc((countstr + 1) * sizeof(char *));
	i = 0;
	while (i < countstr)
	{
		while (*str && checksep(*str, charset))
			str++;
		tabtab[i] = makeword(str, charset);
		str += ftstrlenwithoutsep(str, charset);
		i++;
	}
	tabtab[i] = 0;
	return (tabtab);
}

int main(int ac, char **av)
{
	char **strs;
	int i;
	(void) ac;
	i = 0;
	strs = ft_split(av[1], av[2]);
	while (strs[i])
		printf("<%s>\n", strs[i++]);
}

/*
int	main(void)
{
	char	*str;
	char	*charset;
	char	**words;

	str = "cjk ca va";
	charset = " ";
	words = ft_split(str, charset);
	// Print each word
	for (int i = 0; words[i] != NULL; i++)
	{
		printf("'%s'\n", words[i]);
		free(words[i]);
	}
	free(words);
	return (0);
}*/
