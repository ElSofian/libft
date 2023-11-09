/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:55:43 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:47 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

// Compilation : gcc -Wall -Wextra -Werror ft_putstr_fd.c ft_strlen.c
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		ft_putstr_fd(av[1], atoi(av[2]));
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }