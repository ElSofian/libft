/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:11:54 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 14:49:47 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
	{
		if (!lst)
			ft_printf("Argument lst is NULL in ft_lstadd_back() function.\n");
		if (!new)
			ft_printf("Argument new is NULL in ft_lstadd_back() function.\n");
		return ;
	}
	tmp = ft_lstlast(*lst);
	if (!tmp)
		*lst = new;
	else
		tmp->next = new;
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstadd_back.c 
// ft_lstnew.c ft_lstlast.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	if (ac == 3)
// 	{
// 		list = ft_lstnew(av[1]);
// 		new = ft_lstnew(av[2]);
// 		ft_lstadd_back(&list, new);
// 		while (list)
// 		{
// 			printf("content = %s\n", (char *)list->content);
// 			printf("next = %p\n", list->next);
// 			list = list->next;
// 		}
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }