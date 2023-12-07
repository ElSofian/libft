/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:40:21 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:11:14 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!cpy)
	{
		ft_printf("An error occurred while allocate memory in ft_strdup().\n");
		return (NULL);
	}
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strdup.c ft_strlen.c
// int	main(int ac, char **av)
// {
// 	char	*str;
//
// 	if (ac == 2)
// 	{
// 		str = ft_strdup(av[1]);
// 		if (str)
// 			printf("Me: %s\n", str);
// 		else
// 			printf("Me: Failed.\n");
// 		printf("Original: %s\n", av[1]);
// 		if (str && strcmp(str, av[1]) == 0)
// 			printf("Result: Success\n");
// 		else
// 			printf("Result: Failed.\n");
// 		free(str);
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }