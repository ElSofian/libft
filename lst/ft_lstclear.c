/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:59:57 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 14:49:22 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstclear.c 
// ft_lstnew.c ft_lstdelone.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	if (ac == 3)
// 	{
// 		list = ft_lstnew(av[1]);
// 		new = ft_lstnew(av[2]);
// 		ft_lstadd_back(&list, new);
// 		ft_lstclear(&list, free);
// 		if (!list)
// 			printf("List is deleted\n");
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }