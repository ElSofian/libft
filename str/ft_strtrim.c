/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:56:36 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 10:46:57 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	*return_error(int err)
{
	if (err == 1)
		ft_printf("Argument s1 is NULL in ft_strtrim() function.\n");
	else if (err == 2)
		ft_printf("An error occured while allocate memory in ft_strtrim().\n");
	return (NULL);
}

static int	search(const char *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (return_error(1));
	start = 0;
	while (s1[start] && search(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && search(set, s1[end]) == 1)
		end--;
	if (start > end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (return_error(2));
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// Compilation : gcc -Wall -Wextra -Werror ft_strtrim.c
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_strtrim(av[1], " \n\t"));
// 	else
// 		printf("Not enough or too many arguments.\n");
// 	return (0);
// }