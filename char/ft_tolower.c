/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:50:05 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:21:48 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// Compilation : gcc -Wall -Wextra -Werror ft_tolower.c
// int	main(void)
// {
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%c\n", ft_tolower('0'));
// }