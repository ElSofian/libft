/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:12 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 14:46:13 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (fd < 0)
	{
		ft_printf("Argument fd is less than 0 in ft_putnbr_fd() function.\n");
		return (-1);
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + 48, fd);
	}
	else
		ft_putchar_fd(nbr + 48, fd);
	return (ft_nbrlength(nbr));
}

// Compilation : gcc -Wall -Wextra -Werror ft_putnbr_fd.c ft_putchar_fd.c
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }