/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:52:05 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 15:39:42 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
	{
		ft_printf("Argument lst is NULL in ft_lstnew() function.\n");
		return (NULL);
	}
	list->content = (char *)content;
	list->next = NULL;
	return (list);
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstnew.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;

// 	if (ac == 2)
// 	{
// 		list = ft_lstnew(av[1]);
// 		printf("--- List ---\n");
// 		printf("Content: %s\n", (char *)list->content);
// 		printf("Next: %p\n", list->next);
// 		free(list);
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }