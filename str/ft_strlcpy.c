/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:45:39 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 14:43:57 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// Compilation : gcc -Wall -Wextra -Werror ft_strlcpy.c ft_strlen.c
// int	main(void)
// {
// 	char *c1 = "source";
// 	char c2[] = "destination";
// 	char c3[] = "destination";
// 	printf("Excpected :   6, sour\nResult :   
//	%lu, %s\n", ft_strlcpy(c2, c1, 5), c2);
// 	printf("---\nExcpected :   6, source\nResult :   
//	%lu, %s\n", ft_strlcpy(c3, c1, 8), c3);
// 	return (0);
// }