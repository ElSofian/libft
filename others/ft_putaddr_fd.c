/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:03:26 by soelalou          #+#    #+#             */
/*   Updated: 2023/12/02 14:22:17 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	printadress(const unsigned long n, int fd)
{
	if (n / 16)
		return (printadress((n / 16), fd) + printadress((n % 16), fd));
	else if (!(n / 10))
		ft_putchar_fd(n + '0', fd);
	else
		ft_putchar_fd((char) n - 10 + 'a', fd);
	return (1);
}

int	ft_putaddr_fd(void *adress, int fd)
{
	if (!adress)
		return (ft_putstr_fd("(nil)", fd));
	if (fd < 0)
		return (ft_putstr_fd("Argument fd is NULL in ft_putaddr_fd().\n", fd));
	ft_putstr_fd("0x", fd);
	return (2 + printadress((unsigned long)adress, fd));
}
