/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:25:27 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:12 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstlast.c ft_lstnew.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	if (ac == 3)
// 	{
// 		list = ft_lstnew(av[1]);
// 		new = ft_lstnew(av[2]);
// 		list->next = new;
// 		printf("content = %s\n", (char *)ft_lstlast(list)->content);
// 		printf("next = %p\n", ft_lstlast(list)->next);
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }