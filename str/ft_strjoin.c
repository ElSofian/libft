/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:51:44 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:11:21 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	*return_error(int err)
{
	if (err == 1)
		ft_printf("Argument s1 or s2 is NULL in ft_strjoin().\n");
	else if (err == 2)
		ft_printf("An error occured while allocate memory in ft_strjoin().\n");
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (return_error(1));
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (return_error(2));
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strjoin.c ft_strlen.c
// int	main(int ac, char **av)
// {
// 	char	*str;

// 	if (ac == 3)
// 	{
// 		str = ft_strjoin(av[1], av[2]);
// 		if (str)
// 			printf("%s\n", str);
// 		else
// 			printf("Failed.\n");
// 		free(str);
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }