/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:16:22 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/13 09:16:22 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (src_len);
	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	j = dst_len;
	while (src[i] && j + 1 < size)
		dst[j++] = src[i++];
	if (j < size)
		dst[j] = '\0';
	if (size > dst_len)
		return (src_len + dst_len);
	else
		return (src_len + size);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c
// int	main(void)
// {
// 	char *c1 = "source";
// 	char d2[100] = "destination";
// 	char d3[100] = "destination";
// 	char d4[100] = "destination";
// 	char d5[100] = "dest";
// 	char d6[100] = "dest";
// 	char d7[100] = "dest";
// 	printf("Excepected: 11, destination\n
//	Result: %lu, %s\n", ft_strlcat(d2, c1, 5), d2);
// 	printf("---\nExcepected: 14, destination\n
//	Result: %lu, %s\n", ft_strlcat(d3, c1, 8), d3);
// 	printf("---\nExcepected: 17, destinations\n
//	Result: %lu, %s\n", ft_strlcat(d4, c1, 13), d4);
// 	printf("---\nExcepected: 10, dest\n
//	Result: %lu, %s\n", ft_strlcat(d5, c1, 5), d5);
// 	printf("---\nExcepected: 10, destsou\n
//	Result: %lu, %s\n", ft_strlcat(d6, c1, 8), d6);
// 	printf("---\nExcepected: 10, destsource\n
//	Result: %lu, %s\n", ft_strlcat(d7, c1, 13), d7);
// 	return (0);
// }