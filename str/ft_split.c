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

#include "../libft.h"

static void	*return_error(int err)
{
	if (err == 1)
		ft_printf("An error occured while with allocating memory, ft_split.\n");
	else if (err == 2)
		ft_printf("An error has occured while allocate a tab in put_word().\n");
	return (NULL);
}

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
	if (!str)
		return (0);
	while (str[i])
	{
		if ((is_charset(str[i], c) == 0)
			&& (is_charset(str[i + 1], c) == 1))
			count++;
		i++;
	}
	return (count);
}

static char	*put_word(char const *str, char c, int *pos)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	k = 0;
	while (is_charset(str[*pos + k], c) == 0)
		k++;
	*pos += k;
	i = *pos - 1;
	while (i > 0 && is_charset(str[i - 1], c) == 0)
		i--;
	tmp = (char *)malloc(sizeof(char) * (*pos - i) + 1);
	if (!tmp)
		return (return_error(2));
	j = 0;
	while (i < *pos)
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!tab)
		return (return_error(1));
	while (s[i])
	{
		if (is_charset(s[i], c) == 1)
			i++;
		else
		{
			tab[k++] = put_word(s, c, &i);
			if (!tab)
			{
				ft_freetab(tab);
				return (NULL);
			}
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
// 			printf("[%s]\n", tab[i]);
// 			free(tab[i]);
// 			i++;
// 		}
// 		free(tab);
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }