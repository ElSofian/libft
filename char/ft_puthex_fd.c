/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:04:28 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/27 23:09:25 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_puthex_fd(unsigned int nb, char *base, int fd)
{
	static int	i;

	i = 0;
	if (nb > 15)
	{
		ft_puthex_fd(nb / ft_strlen(base), base, fd);
		ft_putchar_fd(base[nb % ft_strlen(base)], fd);
		i++;
	}
	else
	{
		ft_putchar_fd(base[nb], fd);
		i++;
	}
	return (i);
}