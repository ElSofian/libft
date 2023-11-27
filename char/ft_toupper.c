/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:50:05 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:21:51 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// Compilation : gcc -Wall -Wextra -Werror ft_toupper.c
// int	main(void)
// {
// 	printf("%c\n", ft_toupper('A'));
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('0'));
// }