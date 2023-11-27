/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:02:21 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/27 23:10:07 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putunbr_fd(unsigned int nb, int fd)
{
	static int		i;
	unsigned long	nbr;

	i = 0;
	nbr = nb;
	if (nbr > 9)
	{
		ft_putunbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
		i++;
	}
	else
	{
		ft_putchar_fd(nbr + '0', fd);
		i++;
	}
	return (i);
}