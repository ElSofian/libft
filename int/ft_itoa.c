/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:16:51 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:11:26 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	*return_error(int nb)
{
	(void)nb;
	ft_printf("An error has occured while allocate memory in ft_itoa().\n");
	return (NULL);
}

static char	*print_zero(char *str)
{
	str[0] = 48;
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*str;

	nbr = n;
	i = ft_nbrlength(nbr);
	str = (char *)malloc(sizeof(char) * ft_nbrlength(nbr) + 1);
	if (!str)
		return (return_error(1));
	str[i--] = '\0';
	if (nbr == 0)
		return (print_zero(str));
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

// Compilation : gcc -Wall -Wextra -Werror ft_itoa.c
// int	main(int ac, char **av)
// {
// 	char	*str;
//
// 	if (ac == 2)
// 	{
// 		str = ft_itoa(atoi(av[1]));
// 		if (str)
// 			printf("Result: %s\n", str);
// 		else
// 			printf("Result: Failed.\n");
// 		free(str);
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }