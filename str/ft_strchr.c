/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:10:28 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 18:21:02 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// Compilation : gcc -Wall -Wextra -Werror ft_`chr.c
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("Me: %s\n", ft_strchr(av[1], av[2][0]));
// 		printf("Strchr: %s\n", strchr(av[1], av[2][0]));
// 		printf("Result: %d\n", strcmp(ft_strchr(av[1], av[2][0]),
// 			strchr(av[1], av[2][0])));
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// }