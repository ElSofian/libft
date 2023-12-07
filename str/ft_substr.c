/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:24:58 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:42:09 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	if (!s)
	{
		ft_printf("Argument s is NULL in ft_substr() function.\n");
		return (NULL);
	}
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		ft_printf("An error occured while allocate memory in ft_substr().\n");
		return (NULL);
	}
	i = 0;
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

// Compilation : gcc -Wall -Wextra -Werror ft_substr.c
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%s\n", ft_substr(av[1],
// 			(unsigned int)atoi(av[2]), (size_t)atoi(av[3])));
// 	}
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }