/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:31:22 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:52:36 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i] && (str1[i] == str2[i]) && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strncmp.c
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("Me: %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
// 		printf("Strncmp: %d\n", strncmp(av[1], av[2], atoi(av[3])));
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }