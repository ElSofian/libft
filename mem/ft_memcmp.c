/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:31:42 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 18:24:57 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (i < n && ps1[i] == ps2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)ps1[i] - ps2[i]);
}

// Compilation : gcc -Wall -Wextra -Werror ft_memcmp.c
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 		printf("%d\n", ft_memcmp(av[1], av[2], (size_t)atoi(av[3])));
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }