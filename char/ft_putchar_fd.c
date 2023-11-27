/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:35:38 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:38 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
	{
		ft_printf("Argument fd is less than 0 in ft_putchar_fd() function.\n");
		return (-1);
	}
	write(fd, &c, 1);
	return (1);
}

// Compilation : gcc -Wall -Wextra -Werror ft_putchar_fd.c
// int	main(void)
// {
// 	ft_putchar_fd('a', 1);
// 	return (0);
// }