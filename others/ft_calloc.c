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

#include "../libft.h"

static void	*return_error(int err)
{
	if (err == 1)
		ft_printf("(Size * nmemb) are over INT_MAX in ft_calloc().\n");
	else if (err == 2)
		ft_printf("An error has occured while allocate memory, ft_calloc().\n");
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (size != 0 && nmemb > 2147483647 / size)
		return (return_error(1));
	if (size <= 0)
	{
		size = 1;
		nmemb = 1;
	}
	memory = (void *)malloc(size * nmemb);
	if (memory == NULL)
		return (return_error(2));
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