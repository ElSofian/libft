/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:33:27 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 14:44:20 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long	ft_atoi(const char *str)
{
	int		sign;
	long	i;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

// Compilation : gcc -Wall -Wextra -Werror ft_atoi.c
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("Me: %d\n", ft_atoi(av[1]));
// 		printf("Atoi: %d\n", atoi(av[1]));
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }