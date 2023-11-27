/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:59:51 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 12:02:06 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// Compilation : gcc -Wall -Wextra -Werror ft_bzero.c ft_memset.c
// int	main(void)
// {
// 	char	str[] = "Hello World !";
// 	size_t	n = 5;

// 	printf("Before: %s\n", str);
// 	ft_bzero(str, n);
// 	printf("After: %s\n", str);
// 	return (0);
// }