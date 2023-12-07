/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:07:07 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 14:48:32 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		if (!lst)
			ft_printf("Argument lst is NULL in ft_lstiter() function.\n");
		if (!f)
			ft_printf("Argument function f is NULL in ft_lstiter().\n");
		return ;
	}
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_my_tolower(void *elem)
// {
// 	char	*str;

// 	str = (char *)elem;
// 	while (*str)
// 	{
// 		*str = ft_tolower(*str);
// 		str++;
// 	}
// }

// Compilation : gcc -Wall -Wextra -Werror ft_lstiter.c ft_lstnew.c ft_tolower.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;

// 	if (ac == 2)
// 	{
// 		list = ft_lstnew(av[1]);
// 		ft_lstiter(list, &ft_my_tolower);
// 		printf("content = %s\n", (char *)list->content);
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }