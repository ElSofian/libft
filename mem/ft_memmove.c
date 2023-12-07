/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:33:45 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 17:14:35 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	*return_error(int nb)
{
	(void)nb;
	ft_printf("Arguments dest and src are NULL in ft_memmove() function.\n");
	return (NULL);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*new_src;
	char	*new_dest;
	size_t	i;

	if (!dest && !src)
		return (return_error(1));
	new_src = (char *)src;
	new_dest = (char *)dest;
	i = 0;
	if (new_dest > new_src)
	{
		while (n-- > 0)
			new_dest[n] = new_src[n];
	}
	else
	{
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	return (dest);
}

// Compilation : gcc -Wall -Wextra -Werror ft_memmove.c
// int	main(void)
// {
// 	char	s1[] = "string test";
// 	char	s2[] = "string test";
// 	if (!strcmp(memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5))
// 		&& !strcmp(memmove(s1 + 3, s1, 5), ft_memmove(s2 + 3, s2, 5)))
// 		printf("OK\n");
// 	else
// 		printf("Failed\n");
// }