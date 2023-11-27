/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:11:54 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:19:57 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		if (!lst)
			ft_printf("Argument lst is NULL in ft_lstadd_front() function.\n");
		if (!new)
			ft_printf("Argument new is NULL in ft_lstadd_front() function.\n");
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstadd_front.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	if (ac == 3)
// 	{
// 		// print the two content of the list
// 		list = ft_lstnew(av[1]);
// 		new = ft_lstnew(av[2]);
// 		ft_lstadd_front(&list, new);
// 		printf("content = %s\n", (char *)list->content);
// 		printf("next = %p\n", list->next);
// 		printf("content = %s\n", (char *)list->next->content);
// 		printf("next = %p\n", list->next->next);
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }