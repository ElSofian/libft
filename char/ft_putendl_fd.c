/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:27 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 14:45:36 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (ft_strlen(s));
}

// Compilation :
// gcc -Wall -Wextra -Werror
// ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c | cat -e
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		ft_putendl_fd(av[1], atoi(av[2]));
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }