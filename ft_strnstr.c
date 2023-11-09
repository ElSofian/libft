/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:14:13 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 18:52:26 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tf, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str || ft_strlen(str) == 0)
		return (NULL);
	if (n == 0 || ft_strlen(tf) == 0)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == tf[j] && (i + j) < n)
		{
			j++;
			if (!tf[j])
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strnstr.c ft_strlen.c
// int	main(void)
// {
// 	char	*s1 = "";
// 	char	*s2 = "oh no not the empty string !";
// 	size_t	max = strlen(s2);

// 	char	*i1 = strnstr(s1, s2, max);
// 	char	*i2 = ft_strnstr(s1, s2, max);
// 	printf("s1 = %s\ns2 = %s\nmax = %zu\n", i1, i2, max);
// 	if (i1 == i2)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");
// 	return (0);
// }