/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 11:36:10 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/10 19:40:07 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *map;
	t_list *elem;

	if (lst == NULL || (*f) == NULL)
		return (NULL);
	map = ft_lstnew((*f)(lst));
	if (map == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		elem = ft_lstnew((*f)(lst));
		if (elem == NULL)
		{
			ft_lstclear(&map, (*del));
			break ;
		}
		ft_lstadd_back(&map, elem);
		lst = lst->next;
	}
	return (map);
}
