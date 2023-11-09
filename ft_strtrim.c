/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:56:36 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 10:46:57 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_without_set(char const *s, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (ft_strchr(set, s[i]) == 0)
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen_without_set(s1, set) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	return (str);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strtrim.c ft_strchr.c
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("%s\n", ft_strtrim(av[1], av[2]));
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }