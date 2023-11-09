/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:08:36 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 10:40:15 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c || str[i] != '\0')
			&& (str[i] == c || str[i] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*put_word(char const *str, char c, int pos)
{
	int		i;
	int		j;
	char	*tab;

	i = pos - 1;
	while (i > 0 && str[i - 1] != c)
		i--;
	tab = (char *)malloc(sizeof(char) * (pos - i) + 1);
	if (!tab)
		return (NULL);
	j = 0;
	while (i < pos)
	{
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			tab[k] = put_word(s, c, i + j);
			i += j;
			k++;
		}
	}
	return (tab);
}

// Compilation : gcc -Wall -Wextra -Werror ft_split.c
// int	main(int ac, char **av)
// {
// 	int		i;
// 	char	**tab;
//
// 	if (ac == 2)
// 	{
// 		tab = ft_split(av[1], ' ');
// 		i = 0;
// 		while (tab[i])
// 		{
// 			printf("%s\n", tab[i]);
// 			i++;
// 		}
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }