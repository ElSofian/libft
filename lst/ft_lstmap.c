/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:10:55 by soelalou          #+#    #+#             */
/*   Updated: 2023/11/09 16:04:28 by soelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;

	if (!lst || !f || !del)
	{
		if (!lst)
			ft_printf("Argument lst is NULL in ft_lstmap().\n");
		if (!f || !del)
			ft_printf("Argument function f or del is NULL in ft_lstmap().\n");
		return (NULL);
	}
	new_lst = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	return (new_lst);
}

// Compilation : gcc -Wall -Wextra -Werror ft_lstmap.c ft_lstnew.c 
// ft_lstclear.c ft_lstadd_back.c ft_lstdelone.c ft_lstlast.c -g3
// void	*ft_my_tolower(void *c)
// {
// 	int		i;
// 	char	*str;
// 	char	*new_str;

// 	str = (char *)c;
// 	i = 0;
// 	new_str = (char *)malloc(ft_strlen(str) + 1);
// 	if (!new_str)
// 		return (NULL);
// 	while (str[i])
// 	{
// 		new_str[i] = ft_tolower(str[i]);
// 		i++;
// 	}
// 	new_str[i] = '\0';
// 	return (new_str);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_lst;
// 	t_list	*tmp;

// 	lst = ft_lstnew("Hello");
// 	lst->next = ft_lstnew("World");
// 	lst->next->next = ft_lstnew("!");
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	new_lst = ft_lstmap(lst, &ft_my_tolower, free);
// 	tmp = new_lst;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&lst, free);
// 	ft_lstclear(&new_lst, free);
// }