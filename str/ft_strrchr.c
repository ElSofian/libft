/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:10:28 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 17:05:30 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i >= 0 && s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strrchr.c ft_strlen.c
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("Me: %s\n", ft_strrchr(av[1], av[2][0]));
// 		printf("Strrchr: %s\n", strrchr(av[1], av[2][0]));
// 		printf("Result: %d\n", strcmp(ft_strrchr(av[1], av[2][0]),
// 			strrchr(av[1], av[2][0])));
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }