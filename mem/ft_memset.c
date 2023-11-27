/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:41:02 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:35 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// Compilation : gcc -Wall -Wextra -Werror ft_memset.c
// int	main(void)
// {
// 	char s[100] = "aaaaa";
// 	char s2[100] = "aaaaa";
// 	if (!strcmp(memset(s, 'z', 3), ft_memset(s2, 'z', 3)))
// 		printf("OK\n");
// 	else
// 		printf("Failed : expected '%s', got '%s'.\n", s, s2);
// }