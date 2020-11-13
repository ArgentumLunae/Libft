/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 14:09:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/12 11:54:08 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *temp;

	if (lst == NULL)
		return ;
	temp = lst;
	lst = lst->next;
	(*del)(temp);
	return ;
}
