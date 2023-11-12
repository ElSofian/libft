/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:12:10 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:08:19 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strmapi.c ft_tolower.c ft_strlen.c
// char	ft_my_toupper(unsigned int i, char c)
// {
//	i++;
// 	return (ft_tolower(c));
// }

// int	main(void)
// {
// 	char *str;
//
//	str = ft_strmapi("Hello World", &ft_my_toupper);
//	if (str)
// 		printf("%s\n", str);
//	free(str);
// 	return (0);
// }