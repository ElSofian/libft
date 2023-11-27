/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:12:56 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:23 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstsize.c ft_lstnew.c
// int	main(int ac, char **av)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	if (ac == 3)
// 	{
// 		list = ft_lstnew(av[1]);
// 		new = ft_lstnew(av[2]);
// 		list->next = new;
// 		//   Pour faire un troisieme element
// 		// new = ft_lstnew(av[1]);
// 		// list->next->next = new;
// 		printf("Size: %d\n", ft_lstsize(list));
// 	}
// 	else
// 		printf("Not enough or too many arguments.");
// 	return (0);
// }