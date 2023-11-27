/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:17:53 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 14:47:54 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
	{
		ft_printf("Arguments dest and src are NULL in ft_memcpy() function.\n");
		return (0);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// Compilation : gcc -Wall -Wextra -Werror ft_memcpy.c
// int	main(void)
// {
// 	char s[100] = "aaaaa";
// 	char s2[100] = "aaaaa";
// 	strcpy(s2, s);
// 	if (!strcmp(memcpy(s, "source", 3), ft_memcpy(s2, "source", 3))
// 		&& !strcmp(memcpy(s, "2emesource", 8), ft_memcpy(s2, "2emesource", 8)))
// 		printf("OK\n");
// 	else
// 		printf("Failed : expected '%s', got '%s'.\n", s, s2);
// }