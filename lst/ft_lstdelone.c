/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:02:08 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:03 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
	{
		if (!lst)
			ft_printf("Argument lst is NULL in ft_lstdelone() function.\n");
		if (!del)
			ft_printf("Argument function del is NULL in ft_lstdelone().\n");
		return ;
	}
	del(lst->content);
	free(lst);
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstdelone.c ft_lstnew.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;

// 	if (ac == 2)
// 	{
// 		list = ft_lstnew(av[1]);
// 		printf("content = %s\n", (char *)list->content);
// 		ft_lstdelone(list, free);
// 		if (!list)
// 			printf("List is deleted\n");
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }