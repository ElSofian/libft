/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:09:28 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 10:42:49 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
	{
		if (!s)
			ft_printf("The argument s is NULL in ft_striteri().\n");
		if (!f)
			ft_printf("The function argument f is NULL in ft_striteri().\n");
		return ;
	}
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// Compilation : gcc -Wall -Wextra -Werror ft_striteri.c ft_toupper.c
// void modify_char_at_index(unsigned int i, char *c)
// {
// 	i++;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// int	main(void)
// {
// 	char	str[] = "Hello World";
// 	ft_striteri(str, &modify_char_at_index);
// 	printf("%s\n", str);
// 	return (0);
// }