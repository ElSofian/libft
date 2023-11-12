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

static int	is_charset(char c, char charset)
{
	if (c == charset || c == '\0')
		return (1);
	return (0);
}

static int	words_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((is_charset(str[i], c) == 0)
			&& (is_charset(str[i + 1], c) == 1))
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
	while (i > 0 && is_charset(str[i - 1], c) == 0)
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
		if (is_charset(s[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (is_charset(s[i + j], c) == 0)
				j++;
			tab[k++] = put_word(s, c, i + j);
			i += j;
		}
	}
	tab[k] = NULL;
	return (tab);
}

// Compilation : gcc -Wall -Wextra -Werror ft_split.c
// int	main(int ac, char **av)
// {
// 	int		i;
// 	char	**tab;

// 	if (ac == 3)
// 	{
// 		tab = ft_split(av[1], av[2][0]);
// 		i = 0;
// 		while (tab[i])
// 		{
// 			printf("%s\n", tab[i]);
// 			free(tab[i]);
// 			i++;
// 		}
// 		free(tab);
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }