/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:45:57 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 15:43:24 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = (void *)malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, size * nmemb);
	return (memory);
}

// Compilation : gcc -Wall -Wextra -Werror ft_calloc.c ft_bzero.c ft_memset.c
// int	main(void)
// {
// 	char	*str;
// 	size_t	n = 6;

// 	str = (char *)ft_calloc(n, sizeof(char));
// 	str[0] = 'H';
// 	str[1] = 'e';
// 	str[2] = 'l';
// 	str[3] = 'l';
// 	str[4] = 'o';
// 	str[5] = '\0';
// 	if (str)
// 		printf("Str: %s\n", str);
// 	else
// 		printf("Failed.\n");
// 	free(str);
// 	return (0);
// }