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
		ft_printf("An error has occured while initialize tab with allocating memory in ft_split() function.\n");
	else if (err == 2)
		ft_printf("An error has occured while allocate a tab in put_word() function (ft_split()).\n");
	return (NULL);
}

static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
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
		if ((str[i] != c || str[i] != '\0')
			&& (str[i + 1] == c || str[i + 1] == '\0'))
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
	while (str[*pos + k] != c || str[*pos + k] != '\0')
		k++;
	*pos += k;
	i = *pos - 1;
	while (i > 0 && (str[i - 1] != c || str[i - 1] != '\0'))
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
		if (s[i] == c || s[i] == '\0')
			i++;
		else
		{
			tab[k++] = put_word(s, c, &i);
			if (!tab)
			{
				free_tab(tab);
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